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


void numerot(char* arvore,int i){
    if(arvore[i-1] != '(' && arvore[i-1] != ')'){
        numerot(arvore,i-1);
    }
    if(arvore[i] != '(' && arvore[i] != ')'){
    printf("%c",arvore[i]);  
    }
    
    return;
}

char inorder(char* arvore,int i){
    int y;
    for(int x = i+1;x<strlen(arvore);x++){ 
        if(arvore[x] == '('){
            if(arvore[x+1] == ')'){
                if(arvore[x-1] != '(' && arvore[x-1] != ')'){
                    printf(" ");
                    numerot(arvore,x-1);
                    printf(",");
                }
            }else{
                y = inorder(arvore,x);
                if(arvore[x-1] != '(' && arvore[x-1] != ')'){
                    printf(" ");
                    numerot(arvore,x-1);
                    printf(",");
                }
                x = y;
            }
        }else if(arvore[x] == ')' && arvore[x-1] != '('){
            if(arvore[x-1] != '(' && arvore[x-1] != ')'){
                printf(" ");
                numerot(arvore,x-1);
                printf(",");
            }
            return x;
        }
    }
}

char preorder(char* arvore,int i){
    if(arvore[i+1] != '(' && arvore[i+1] != ')'){
        printf(" ");
    }
    for(int x = i+1;x<strlen(arvore);x++){
        if(arvore[x] != '(' && arvore[x] != ')'){
            printf("%c",arvore[x]);
        }else if(arvore[x] == '('){
            if(arvore[x+1] != '(' && arvore[x+1] != ')'){
                printf(",");
            }
            x = preorder(arvore,x);
        }else{
            return x;
        }
    }
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
    printf("preoder:");
    preorder(arvore,0);
    printf(",\n");
    printf("inorder:");
    inorder(arvore,0);
    printf("\n");
    return 0;
}
