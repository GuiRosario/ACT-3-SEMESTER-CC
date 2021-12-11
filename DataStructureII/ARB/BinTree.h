#ifndef BINTREE_H
#define BINTREE_H
#include <stdbool.h>

typedef struct no{
	int key;
	struct no *left;
	struct no *right;
	struct no *p;
}TNo;

typedef struct{
	TNo* root;
}BinTree;

BinTree* BinTree_create();
TNo* TNo_creatNFill();
int BinTree_read(TNo*,char*,int);
void BinTree_preorder(TNo*);
void BinTree_inorder(TNo*);
void ABorNOT(TNo*,int*);
#endif
//(1(2(3()4()))(5(6())))