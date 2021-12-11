#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char* arvorep;
    scanf("%m[^\n]", &arvorep);
    BinTree* arvore = BinTree_create();
    TNo* novo = TNo_creatNFill();
    BinTree_read(novo,arvorep,1);
    int c = 0;
    ABorNOT(novo,&c);
    return 0;
}