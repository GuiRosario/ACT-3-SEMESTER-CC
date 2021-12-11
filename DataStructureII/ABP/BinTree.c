#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>

BinTree* BinTree_create(){
	BinTree* tree = malloc(sizeof(BinTree));
	if(tree){
		tree->root = NULL;
	}return tree;
}

TNo* TNo_creatNFill(int key){
	TNo* node = malloc(sizeof(TNo));
	if(node != NULL){
	node->p = NULL;
	node->left = NULL;
	node->right = NULL;
	node->key = key;
	}return node;
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

int BinTree_read(TNo* tree,char* ptree,int i){
	if(ptree[i] == '('){
		TNo* novo = TNo_creatNFill(0);
		novo->p = tree;
		tree->left = novo;
		BinTree_read(novo,ptree,i+1);
	}else if(ptree[i] == ')'){
		if(ptree[i-1] == '('){
			tree = NULL;
		}		
		return i++;
	}else{
		int x;
		int z = i;
		x = read(ptree,&z);
		tree->key = x;
		i = z;
	}
	if(ptree[i] == '('){
		TNo* novo1 = TNo_creatNFill(0);
		novo1->p = tree;
		tree->right = novo1;                     
		BinTree_read(novo1,ptree,i+1);
		return i+1;           
		}	
}