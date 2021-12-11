#include <stdio.h>

int imp(int n){
    if(n < 0) return n;
    else{
        printf("%i\n",n);
        return imp(n-1);
    }
}

int main(){
int n;
scanf("%i",&n);
imp(n);
}