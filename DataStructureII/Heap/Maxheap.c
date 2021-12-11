#include <stdio.h>
#include <stdlib.h>
int Left(int i){
    return 2*i;
}

int Right(int i){
    return 2*i + 1;
}

void Maxheapfy(int* A,int i,int heapsize){
    int save;
    int largest;
    int l = Left(i);
    int r = Right(i);
    if(l <= heapsize && A[l] > A[i]){
        largest = l;
    }
    if(r <= heapsize && A[r] > A[i]){
        largest = r;
    }
    if(largest != i){
        save = A[i];
        A[i] = A[largest];
        A[largest] = save;
        Maxheapfy(A,largest,heapsize);        
    }
}

int* BuildMaxheap(int* A,int lenght){
    int heapsize;
    heapsize = lenght;
    for(int i = lenght/2;i>=1;i--){
        Maxheapfy(A,i,heapsize);
    }
    return A;
}

int main(){
    int lenght = 10;
    int* v;
    v = malloc(lenght*(sizeof(int)));
    for(int i = 0;i<lenght;i++){
        scanf("%i",&v[i]);
    }
    v = BuildMaxheap(v,lenght);

    for(int i = 0;i<lenght;i++){
        printf("[%i] ",v[i]);
    }
    printf("\n");
    return 0;
}

