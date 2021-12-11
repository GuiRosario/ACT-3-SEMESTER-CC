#include <stdio.h>

int m(int n,int v[]){
    if(n == 1) return ;
    else{
        return *pot(k,n-1);
    }
}

int main(){
    int n;
    scanf("%i",&n);
    int v[n];
    for(int i = 0;i<n;i++){
        scanf("%i",&v[i]);
    }
    printf("Menor elemento do vetor:%i\n",m(n,v));
}