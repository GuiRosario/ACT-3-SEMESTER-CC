#include <stdio.h>

int soma(int n){
    if(n == 1) return n;
    else return n + soma(n-1);
}

int main(){
int n;
scanf("%i",&n);
printf("Soma:%i\n",soma(n));
}