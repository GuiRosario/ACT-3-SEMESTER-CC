#include <stdio.h>

int imp(int n){
    if(n == 0){
        printf("0\n");
        return n + 1;
    } 
    else{
        printf("%i\n",imp(n-1));
        return n + 1;
    }
}

int main(){
    int n;
    scanf("%i",&n);
    imp(n);
}