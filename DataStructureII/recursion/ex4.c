#include <stdio.h>

int cubo(int n){
    if(n == 1) return n*n*n;
    else{
        return n*n*n + cubo(n-1);
    }
}

int main(){
    int n;
    scanf("%i",&n);
    printf("Soma dos cubos:%i\n",cubo(n));
}