#include <stdio.h>

int pot(int k,int n){
    if(n == 1) return k;
    else{
        return k*pot(k,n-1);
    }
}

int main(){
    int n;
    int k;
    scanf("%i %i",&k,&n);
    printf("%i^%i:%i\n",k,n,pot(k,n));
}