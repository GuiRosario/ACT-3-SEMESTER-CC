/*  | UNIVERSIDADE FEDERAL DO TOCANTINS |
    | Estrutura de Dados II             |
    |                                   |
    | Arvores Binárias - Leitura        |
    |                                   |
    | Aluno: Guilherme da Silva Rosario |
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pos_n(char* arvore,int i,int v){
    if(i > strlen(arvore)){
        return;
    }
    if(arvore[i] != '(' && arvore[i] != ')'){
        if(arvore[i+1] != '(' && arvore[i+1] != ')'){
            printf("%c",arvore[i]);
            pos_n(arvore,i+1,1);
        }else{
            printf(" %c,",arvore[i]);
        }
    }else{
        pos_n(arvore,i+1,0);
    }
}
void preorder(char* arvore){
    printf("PREORDER:");
    pos_n(arvore,0,0);
}

void verificar_tamanho(char* arvore){
    if(strlen(arvore) > 4096){
    printf("Entrada Invalida!"); 
    exit(0);   
    } 
}

int main(){
    char* arvore;
    scanf("%m[^\n]", &arvore);
    verificar_tamanho(arvore);
    preorder(arvore);

    return 0;
};