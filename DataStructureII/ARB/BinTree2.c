#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>

BinTree* BinTree_create(){
	BinTree* tree = malloc(sizeof(BinTree));
	if(tree){
		tree->root = NULL;
	}return tree;
}

TNo* TNo_creatNFill(){
	TNo* node = malloc(sizeof(TNo));
	if(node != NULL){
	node->p = NULL;
	node->left = NULL;
	node->right = NULL;
	}return node;
}

void BinTree_preorder(TNo* tree){
    if(tree != NULL){
        printf(" %i,",tree->key);
        BinTree_preorder(tree->left);
        BinTree_preorder(tree->right);
    }
}

void BinTree_inorder(TNo* tree){
    if(tree != NULL){
        BinTree_inorder(tree->left);
        printf(" %i,",tree->key);
		BinTree_inorder(tree->right);
    }
}

int read(char* ptree,int* z){
	int i = *z;
	char* num;
	int cont = 0;
	num = malloc(sizeof(char));
	num[cont] = ptree[i];
	i++;
	while(ptree[i] != '(' && ptree[i] != ')'){
		cont++;
		num = realloc(num,(cont+2)*sizeof(char));
		num[cont] = ptree[i];
		i++;
	}
	*z = i;
	return atoi(num);
}

int ABorNOT(TNo* tree,int* c){
	if(tree != NULL){
		
	}
}

int BinTree_read(TNo* tree,char* ptree,int i){
	if(ptree[i] != '(' && ptree[i] != ')'){
        int x;
		int z = i;
		x = read(ptree,&z);
		tree->key = x;
		i = z;
	}if(ptree[i] == '('){
        TNo* novo = TNo_creatNFill();
		novo->p = tree;
		tree->left = novo;
		i = BinTree_read(novo,ptree,i+1);
	}if(ptree[i] == ')'){
		if(ptree[i-1] == '('){
            if(tree->p->left == tree){
                tree->p->left = NULL;
                free(tree);
            }else if(tree->p->right == tree){
                tree->p->right = NULL;
                free(tree);
            }
		}		
		return i+1;
	}
	if(ptree[i] == '('){
		TNo* novo1 = TNo_creatNFill();
		novo1->p = tree;
		tree->right = novo1;                     
		i = BinTree_read(novo1,ptree,i+1);
		return i+1;           
		}	
}