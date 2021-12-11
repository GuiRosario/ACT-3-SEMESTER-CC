#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tabela.h"
#define MAX 50
void limparbuffer(void){
	char b;
	do{
		b = getchar();
	}while(b != '\n' && b != EOF);
}

int menu2(){
    int select;
    printf("|               |BANCO DE DADOS|               |\n");
    printf("|                                              |\n");
    printf("|1.Adicionar                                   |\n");
    printf("|2.Atualizar                                   |\n");
    printf("|3.Excluir                   	               |\n");
    printf("|4.Voltar                                      |\n");
    limparbuffer();
    scanf("%i",&select);
    while(select != 1 || select != 2 || select != 3 || select != 4){
        printf("Opcao invalida!");
        limparbuffer();
        scanf("%i",&select);
    }
    return select;
}

void menu(){
    while(1){
        int select;
        char string1[MAX];
        char string2[MAX];
        char string3[MAX];
        char string4[MAX];
        char string5[MAX];
        List_1* Lista1 = create_list_1();
        List_2* Lista2 = create_list_2();
        List_3* Lista3 = create_list_3();
        printf("|               |BANCO DE DADOS|               |\n");
        printf("|                                              |\n");
        printf("|1.Gerenciar                                   |\n");
        printf("|2.Apresentar                                  |\n");
        limparbuffer();
        scanf("%i",&select);
        while(select != 1 || select != 2){
            printf("Opcao invalida!");
            limparbuffer();
            scanf("%i",&select);
        }
            switch(select)
            {
            case 1:
                while(1){
                    printf("|               |BANCO DE DADOS|               |\n");
                    printf("|                                              |\n");
                    printf("|1.Displina                                    |\n");
                    printf("|2.Turma                                       |\n");
                    printf("|3.Historico                                   |\n");
                    printf("|4.Voltar                                      |\n");
                    limparbuffer();
                    scanf("%i",&select);
                    while(select != 1 || select != 2 || select != 3 || select != 4){
                        printf("Opcao invalida!");
                        limparbuffer();
                        scanf("%i",&select);
                    }
                    if(select == 1){
                        while(1){
                            int num;
                            select = menu2();
                            if(select == 1){
                                printf("|Digite o course_name:|");
                                scanf("%s",string1);
                                printf("|Digite o course_number:|");
                                scanf("%s",string2);
                                printf("|Digite as credit_hours:|");
                                scanf("%s",string3);
                                printf("|Digite o department:|");
                                scanf("%s",string4);
                                add_data_1(Lista1,string1,string2,string3,string4);
                            }else if(select == 2){
                                print_nodes_1(Lista1,-1);
                                printf("|Digite o nivel do dado que deseja modificar:");
                                scanf("%i",&num);
                                printf("|Digite o course_name:|");
                                scanf("%s",string1);
                                printf("|Digite o course_number:|");
                                scanf("%s",string2);
                                printf("|Digite as credit_hours:|");
                                scanf("%s",string3);
                                printf("|Digite o department:|");
                                scanf("%s",string4);
                                data_modify_data_1(Lista1,num,string1,string2,string3,string4);
                                print_nodes_1(Lista1,-1);                                
                            }else if(select == 3){
                                print_nodes_1(Lista1,-1);
                                printf("|Digite o nivel do dado que deseja deletar:");
                                scanf("%i",&num);
                                data_delete_1(Lista1,num);
                                print_nodes_1(Lista1,-1);
                            }else{
                                break;
                            }
                        }
                    }
                    else if(select == 2){
                        while(1){
                            int num;
                            select = menu2();
                            if(select == 1){
                                printf("|Digite o section_identifier:|");
                                scanf("%s",string1);
                                printf("|Digite o course_number:|");
                                scanf("%s",string2);
                                printf("|Digite o semester:|");
                                scanf("%s",string3);
                                printf("|Digite o year:|");
                                scanf("%s",string4);
                                printf("|Digite o instructor:|");
                                scanf("%s",string5);                                
                                add_data_2(Lista2,string1,string2,string3,string4,string5);
                            }else if(select == 2){
                                print_nodes_1(Lista2,-1);
                                printf("|Digite o nivel do dado que deseja modificar:");
                                scanf("%i",&num);
                                printf("|Digite o section_identifier:|");
                                scanf("%s",string1);
                                printf("|Digite o course_number:|");
                                scanf("%s",string2);
                                printf("|Digite o semester:|");
                                scanf("%s",string3);
                                printf("|Digite o year:|");
                                scanf("%s",string4);
                                printf("|Digite o instructor:|");
                                scanf("%s",string5);
                                data_modify_data_2(Lista2,num,string1,string2,string3,string4,string5);
                                print_nodes_2(Lista2,-1);                                
                            }else if(select == 3){
                                print_nodes_1(Lista2,-1);
                                printf("|Digite o nivel do dado que deseja deletar:");
                                scanf("%i",&num);
                                data_delete_1(Lista2,num);
                                print_nodes_1(Lista2,-1);
                            }else{
                                break;
                            }
                        }                       
                    }else if(select == 3){
                        while(1){
                            int num;
                            select = menu2();
                            if(select == 1){
                                printf("|Digite o student_number:|");
                                scanf("%s",string1);
                                printf("|Digite o section_identifier:|");
                                scanf("%s",string2);
                                printf("|Digite a grade:|");
                                scanf("%s",string3);
                                add_data_3(Lista3,string1,string2,string3);
                            }else if(select == 2){
                                print_nodes_1(Lista3,-1);
                                printf("|Digite o nivel do dado que deseja modificar:");
                                scanf("%i",&num);
                                printf("|Digite o student_number:|");
                                scanf("%s",string1);
                                printf("|Digite o section_identifier:|");
                                scanf("%s",string2);
                                printf("|Digite a grade:|");
                                scanf("%s",string3);
                                data_modify_data_3(Lista3,num,string1,string2,string3);
                                print_nodes_1(Lista3,-1);                                
                            }else if(select == 3){
                                print_nodes_1(Lista3,-1);
                                printf("|Digite o nivel do dado que deseja deletar:");
                                scanf("%i",&num);
                                data_delete_1(Lista3,num);
                                print_nodes_1(Lista3,-1);
                            }else{
                                break;
                            }
                        }
                    }else{
                        break;
                    }
                break;
            case 2:
                while(1){
                    printf("|               |BANCO DE DADOS|               |\n");
                    printf("|                                              |\n");
                    printf("|1.imprimir totalmente                         |\n");
                    printf("|2.imprimir parte especifica                   |\n");
                    printf("|3.voltar                                      |\n");
                    limparbuffer();
                    scanf("%i",&select);
                    while(select != 1 || select != 2 || select != 3){
                        printf("Opcao invalida!");
                        limparbuffer();
                        scanf("%i",&select);
                    }
                    if(select == 1){
                        print_nodes_1(Lista1,-1);
                        print_nodes_2(Lista2,-1);
                        print_nodes_3(Lista3,-1);
                    }else if(select == 2){
                        while(1){
                            int select;
                            printf("|               |BANCO DE DADOS|               |\n");
                            printf("|                                              |\n");
                            printf("|1.Displina                                    |\n");
                            printf("|2.Turma                                       |\n");
                            printf("|3.Historico                                   |\n");
                            printf("|4.Voltar                                      |\n");
                            limparbuffer();
                            scanf("%i",&select);
                            while(select != 1 || select != 2 || select != 3 || select != 4){
                                printf("Opcao invalida!");
                                limparbuffer();
                                scanf("%i",&select);
                            }
                            if(select == 1){
                                while(1){
                                    int select;
                                    printf("|               |BANCO DE DADOS|              |\n");
                                    printf("|                                             |\n");
                                    printf("|1.Course_name                                |\n");
                                    printf("|2.Course_number                              |\n");
                                    printf("|3.Credit_hours                               |\n");
                                    printf("|4.Department                                 |\n");
                                    printf("|5.Voltar                                     |\n");
                                    limparbuffer();
                                    scanf("%i",&select);
                                    while(select != 1 || select != 2 || select != 3 || select != 4){
                                        printf("Opcao invalida!");
                                        limparbuffer();
                                        scanf("%i",&select);
                                    }
                                    if(select == 1){

                                    }else if(select == 2){

                                    }else if(select == 3){

                                    }else if(select == 4){

                                    }else{
                                        break;
                                    }
                                }
                            }else if(select == 2){
                                while(1){
                                    int select;
                                    printf("|               |BANCO DE DADOS|              |\n");
                                    printf("|                                             |\n");
                                    printf("|1.Section_identifier                         |\n");
                                    printf("|2.Corse_number                               |\n");
                                    printf("|3.Semester                                   |\n");
                                    printf("|4.Year                                       |\n");
                                    printf("|5.Instructor                                 |\n");
                                    printf("|6.Voltar                                     |\n");
                                    limparbuffer();
                                    scanf("%i",&select);
                                    while(select != 1 || select != 2 || select != 3 || select != 4){
                                        printf("Opcao invalida!");
                                        limparbuffer();
                                        scanf("%i",&select);
                                    }    
                                    if(select == 1){

                                    }else if(select == 2){

                                    }else if(select == 3){

                                    }else if(select == 4){

                                    }else if(select == 5){

                                    }else{
                                        break;
                                    }
                                }
                            }else if(select == 3){
                                while(1){
                                    int select;
                                    printf("|               |BANCO DE DADOS|               |\n");
                                    printf("|                                              |\n");
                                    printf("|1.Displina                                    |\n");
                                    printf("|2.Turma                                       |\n");
                                    printf("|3.Historico                                   |\n");
                                    printf("|4.Voltar                                      |\n");
                                    limparbuffer();
                                    scanf("%i",&select);
                                    while(select != 1 || select != 2 || select != 3 || select != 4){
                                        printf("Opcao invalida!");
                                        limparbuffer();
                                        scanf("%i",&select);
                                    }                                
                                }
                            
                            }else{
                                break;
                            }
                        }
                    }else{
                        break;
                    }

                    break;
                }
            }
        }
    }
}

int main(){
    display();
}
