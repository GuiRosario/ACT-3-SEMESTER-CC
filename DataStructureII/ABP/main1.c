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
    arvore->root = novo;
    printf("PREORDER:");
    BinTree_preorder(novo);
    printf("\n");
    printf("INORDER:");
    BinTree_inorder(novo);
    printf("\n");
    return 0;
}