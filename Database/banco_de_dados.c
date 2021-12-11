#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <string.h>
#include "tabela.h"
#define MAX 50

typedef struct node_data_1{
    char name[MAX];
    char course[MAX];
    char credit[MAX];
    char department[MAX];
    struct node_data_1* next;
}Node_1;

typedef struct node_data_2{
    char identifier[MAX];
    char course[MAX];
    char semester[MAX];
    char year[MAX];
    char instructor[MAX];
    struct node_data_2* next;
}Node_2;

typedef struct node_data_3{
    char number[MAX];
    char identifier[MAX];
    char grade[MAX];
    struct node_data_3* next;
}Node_3;

typedef struct list_data_1{
    Node_1* begin;
    Node_1* end;
}List_1;

typedef struct list_data_2{
    Node_2* begin;
    Node_2* end;
}List_2;

typedef struct list_data_3{
    Node_3* begin;
    Node_3* end;
}List_3;

Node_1* create_node_1(char* name, char* course, char* credit, char* department){
    Node_1* node = (Node_1*)calloc(1, sizeof(Node_1));
    strcpy(node->name, name);
    strcpy(node->course, course);
    strcpy(node->credit, credit);
    strcpy(node->department, department);
    return node;
}

Node_2* create_node_2(char* identifier, char* course, char* semester, char* year, char* instructor){
    Node_2* node = (Node_2*)calloc(1, sizeof(Node_2));
    strcpy(node->identifier, identifier);
    strcpy(node->course, course);
    strcpy(node->semester, semester);
    strcpy(node->year, year);
    strcpy(node->instructor, instructor);
    return node;
}

Node_3* create_node_3(char* number, char* identifier, char* grade){
    Node_3* node = (Node_3*)calloc(1, sizeof(Node_3));
    strcpy(node->number, number);
    strcpy(node->identifier, identifier);
    strcpy(node->grade, grade);
    return node;
}

List_1* create_list_1(){
    List_1* L = (List_1*)calloc(1, sizeof(List_1));
    L->begin = NULL;
    L->end = NULL;
    return L;
}

List_2* create_list_2(){
    List_2* L = (List_2*)calloc(1, sizeof(List_2));
    L->begin = NULL;
    L->end = NULL;
    return L;
}

List_3* create_list_3(){
    List_3* L = (List_3*)calloc(1, sizeof(List_3));
    L->begin = NULL;
    L->end = NULL;
    return L;
}

bool list_is_empty_1(const List_1* list){
    return (list->begin == NULL && list->end == NULL);
}

bool list_is_empty_2(const List_2* list){
    return (list->begin == NULL && list->end == NULL);
}

bool list_is_empty_3(const List_3* list){
    return (list->begin == NULL && list->end == NULL);
}

void data_delete_1(List_1* list, int num){
    int index = 1;
    if(!list_is_empty_1(list)){
        Node_1* prev = NULL;
        Node_1* pos = list->begin;
        FILE* arq = fopen("table_1.dat","r");
        FILE* aux = fopen("aux_table.dat","w");
        char buffer[MAX];
        strcpy(buffer, "");

        while(pos != NULL && index != num){
            for(int i = 0; i < 4; i++){
                fgets(buffer, MAX, arq);
                if(feof(arq))
                    break;
                fprintf(aux, "%s", buffer);
            }
            prev = pos;
            pos = pos->next;
            index++;
        }

        if(pos != NULL){
            if(list->end == pos)
                list->end = prev;

            if(list->begin == pos)
                list->begin = list->begin->next;
            else
                prev->next = pos->next;
            free(pos);

            int cont = 0;
            while(1){
            fgets(buffer, MAX, arq);
            if(feof(arq))
                break;
            if(cont >= 4)
                fprintf(aux, "%s", buffer);
            cont++;
            }
            fclose(arq);
            fclose(aux);

            transfer_data_1();
        }
    }
}

void data_delete_2(List_2* list, int num){
    int index = 1;
    if(!list_is_empty_2(list)){
        Node_2* prev = NULL;
        Node_2* pos = list->begin;
        FILE* arq = fopen("table_2.dat","r");
        FILE* aux = fopen("aux_table.dat","w");
        char buffer[MAX];
        strcpy(buffer, "");

        while(pos != NULL && index != num){
            for(int i = 0; i < 5; i++){
                fgets(buffer, MAX, arq);
                if(feof(arq))
                    break;
                fprintf(aux, "%s", buffer);
            }
            prev = pos;
            pos = pos->next;
            index++;
        }

        if(pos != NULL){
            if(list->end == pos)
                list->end = prev;

            if(list->begin == pos)
                list->begin = list->begin->next;
            else
                prev->next = pos->next;
            free(pos);

            int cont = 0;
            while(1){
            fgets(buffer, MAX, arq);
            if(feof(arq))
                break;
            if(cont >= 5)
                fprintf(aux, "%s", buffer);
            cont++;
            }
            fclose(arq);
            fclose(aux);

            transfer_data_2();
        }
    }
}

void data_delete_3(List_3* list, int num){
    int index = 1;
    if(!list_is_empty_3(list)){
        Node_3* prev = NULL;
        Node_3* pos = list->begin;
        FILE* arq = fopen("table_3.dat","r");
        FILE* aux = fopen("aux_table.dat","w");
        char buffer[MAX];
        strcpy(buffer, "");

        while(pos != NULL && index != num){
            for(int i = 0; i < 3; i++){
                fgets(buffer, MAX, arq);
                if(feof(arq))
                    break;
                fprintf(aux, "%s", buffer);
            }
            prev = pos;
            pos = pos->next;
            index++;
        }

        if(pos != NULL){
            if(list->end == pos)
                list->end = prev;

            if(list->begin == pos)
                list->begin = list->begin->next;
            else
                prev->next = pos->next;
            free(pos);

            int cont = 0;
            while(1){
            fgets(buffer, MAX, arq);
            if(feof(arq))
                break;
            if(cont >= 3)
                fprintf(aux, "%s", buffer);
            cont++;
            }
            fclose(arq);
            fclose(aux);

            transfer_data_3();
        }
    }
}

void data_modify_data_1(List_1* list, int num, char* name, char* course, char* credit, char* department){
    if(!list_is_empty_1(list)){
        int index = 1, count = 0;
        char buffer[MAX], temp[MAX];
        Node_1* pos = list->begin;

        FILE* arq = fopen("table_1.dat","r");
        FILE* aux = fopen("aux_table.dat","w");
        strcpy(buffer, "");
        strcpy(temp, "");

        while(pos != NULL && index != num){
            for(int i = 0; i < 4; i++){
                fgets(buffer, MAX, arq);
                if(feof(arq))
                    break;
                fprintf(aux, "%s", buffer);
            }
            pos = pos->next;
            index++;
        }

        strcpy(pos->name, name);
        strcpy(pos->course, course);
        strcpy(pos->credit, credit);
        strcpy(pos->department, department);

        strcpy(temp, pos->name);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->course);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->credit);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->department);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);

        strcpy(buffer, "");

        while(1){
            fgets(buffer, MAX, arq);
            if(feof(arq))
                break;
            if(count >= 4)
                fprintf(aux,"%s",buffer);
            count++;
        }

        fclose(arq);
        fclose(aux);

        transfer_data_1();
    }
}

void data_modify_data_2(List_2* list, int num, char* identifier, char* course, char* semester, char* year, char* instructor){
    if(!list_is_empty_2(list)){
        int index = 1, count = 0;
        char buffer[MAX], temp[MAX];
        Node_2* pos = list->begin;

        FILE* arq = fopen("table_2.dat","r");
        FILE* aux = fopen("aux_table.dat","w");
        strcpy(buffer, "");
        strcpy(temp, "");

        while(pos != NULL && index != num){
            for(int i = 0; i < 5; i++){
                fgets(buffer, MAX, arq);
                if(feof(arq))
                    break;
                fprintf(aux, "%s", buffer);
            }
            pos = pos->next;
            index++;
        }

        strcpy(pos->identifier, identifier);
        strcpy(pos->course, course);
        strcpy(pos->semester, semester);
        strcpy(pos->year, year);
        strcpy(pos->instructor, instructor);

        strcpy(temp, pos->identifier);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->course);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->semester);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->year);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->instructor);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);

        strcpy(buffer, "");

        while(1){
            fgets(buffer, MAX, arq);
            if(feof(arq))
                break;
            if(count >= 5)
                fprintf(aux,"%s",buffer);
            count++;
        }

        fclose(arq);
        fclose(aux);

        transfer_data_2();
    }
}

void data_modify_data_3(List_3* list, int num, char* number, char* identifier, char* grade){
    if(!list_is_empty_3(list)){
        int index = 1, count = 0;
        char buffer[MAX], temp[MAX];
        Node_3* pos = list->begin;

        FILE* arq = fopen("table_3.dat","r");
        FILE* aux = fopen("aux_table.dat","w");
        strcpy(buffer, "");
        strcpy(temp, "");

        while(pos != NULL && index != num){
            for(int i = 0; i < 3; i++){
                fgets(buffer, MAX, arq);
                if(feof(arq))
                    break;
                fprintf(aux, "%s", buffer);
            }
            pos = pos->next;
            index++;
        }

        strcpy(pos->number, number);
        strcpy(pos->identifier, identifier);
        strcpy(pos->grade, grade);

        strcpy(temp, pos->number);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->identifier);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);
        strcpy(temp, pos->grade);
        strcat(temp, "\n");
        fprintf(aux, "%s", temp);

        strcpy(buffer, "");

        while(1){
            fgets(buffer, MAX, arq);
            if(feof(arq))
                break;
            if(count >= 3)
                fprintf(aux,"%s",buffer);
            count++;
        }

        fclose(arq);
        fclose(aux);

        transfer_data_3();
    }
}

void add_data_1(List_1* list, char* name, char* course, char* credit, char* department){
    Node_1* node = create_node_1(name, course, credit, department);

    if(list_is_empty_1(list)){
        list->begin = node;
        list->end = node;
    }else{
        list->end->next = node;
        list->end = list->end->next;
    }
    print_data_1(list);
}

void add_data_2(List_2* list, char* identifier, char* course, char* semester, char* year, char* instructor){
    Node_2* node = create_node_2(identifier, course, semester, year, instructor);

    if(list_is_empty_2(list)){
        list->begin = node;
        list->end = node;
    }else{
        list->end->next = node;
        list->end = list->end->next;
    }
    print_data_2(list);
}

void add_data_3(List_3* list,char* number, char* identifier, char* grade){
    Node_3* node = create_node_3(number, identifier, grade);

    if(list_is_empty_3(list)){
        list->begin = node;
        list->end = node;
    }else{
        list->end->next = node;
        list->end = list->end->next;
    }
    print_data_3(list);
}

void print_data_1(const List_1* list){
    Node_1* node = list->begin; 
    FILE *arq;
    char buffer[MAX];
    arq = fopen("table_1.dat","w");

    while(node != NULL){
        strcpy(buffer, node->name);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->course);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->credit);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->department);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        node = node->next;
    }
    fclose(arq);
}

void print_data_2(const List_2* list){
    Node_2* node = list->begin; 
    FILE *arq;
    char buffer[MAX];
    arq = fopen("table_2.dat","w");

    while(node != NULL){
        strcpy(buffer, node->identifier);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->course);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->semester);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->year);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->instructor);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        node = node->next;
    }
    fclose(arq);
}

void print_data_3(const List_3* list){
    Node_3* node = list->begin; 
    FILE *arq;
    char buffer[MAX];
    arq = fopen("table_3.dat","w");

    while(node != NULL){
        strcpy(buffer, node->number);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->identifier);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        strcpy(buffer, node->grade);
        strcat(buffer, "\n");
        fprintf(arq, "%s", buffer);
        node = node->next;
    }
    fclose(arq);
}

void destroy_linked_list_1(List_1** list){
    List_1* L = *list;
    Node_1* node = L->begin;
    Node_1* aux = NULL;

    while(node != NULL){
        aux = node;
        node = node->next;
        free(aux);
    }
    free(list);
    *list = NULL;
}

void destroy_linked_list_2(List_2** list){
    List_2* L = *list;
    Node_2* node = L->begin;
    Node_2* aux = NULL;

    while(node != NULL){
        aux = node;
        node = node->next;
        free(aux);
    }
    free(list);
    *list = NULL;
}

void destroy_linked_list_3(List_3** list){
    List_3* L = *list;
    Node_3* node = L->begin;
    Node_3* aux = NULL;

    while(node != NULL){
        aux = node;
        node = node->next;
        free(aux);
    }
    free(list);
    *list = NULL;
}

void print_nodes_1(const List_1* list){
    Node_1* node = list->begin;
    while(node!=NULL){
        //strcat(node->name, "\0");
        printf("name: %s\n", node->name);
        //strcat(node->course, "\0");
        printf("course: %s\n", node->course);
        //strcat(node->credit, "\0");
        printf("credit: %s\n", node->credit);
        //strcat(node->department, "\0");
        printf("department: %s\n", node->department);
        puts("");
        node = node->next;
    }
}

void print_nodes_2(const List_2* list){
    Node_2* node = list->begin;
    while(node!=NULL){
        //strcat(node->identifier, "\0");
        printf("identifier: %s\n", node->identifier);
        //strcat(node->course, "\0");
        printf("course: %s\n", node->course);
        //strcat(node->semester, "\0");
        printf("semester: %s\n", node->semester);
        //strcat(node->year, "\0");
        printf("year: %s\n", node->year);
        //strcat(node->instructor, "\0");
        printf("instructor: %s\n", node->instructor);
        puts("");
        node = node->next;
    }
}

void print_nodes_3(const List_3* list){
    Node_3* node = list->begin;
    while(node!=NULL){
        //strcat(node->number, "\0");
        printf("number: %s\n", node->number);
        //strcat(node->identifier, "\0");
        printf("identifier: %s\n", node->identifier);
        //strcat(node->grade, "\0");
        printf("grade: %s\n", node->grade);
        puts("");
        node = node->next;
    }
}

void transfer_data_1(){
    char buffer[MAX];
    FILE* arq = fopen("table_1.dat","w");
    FILE* aux = fopen("aux_table.dat","r");
    strcpy(buffer, "");

    while(1){
        fgets(buffer, MAX, aux);
        if(feof(aux))
            break;
        fprintf(arq, "%s", buffer);
    }
    fclose(arq);
    fclose(aux);
}

void transfer_data_2(){
    char buffer[MAX];
    FILE* arq = fopen("table_2.dat","w");
    FILE* aux = fopen("aux_table.dat","r");
    strcpy(buffer, "");

    while(1){
        fgets(buffer, MAX, aux);
        if(feof(aux))
            break;
        fprintf(arq, "%s", buffer);
    }
    fclose(arq);
    fclose(aux);
}

void transfer_data_3(){
    char buffer[MAX];
    FILE* arq = fopen("table_3.dat","w");
    FILE* aux = fopen("aux_table.dat","r");
    strcpy(buffer, "");

    while(1){
        fgets(buffer, MAX, aux);
        if(feof(aux))
            break;
        fprintf(arq, "%s", buffer);
        }
        fclose(arq);
        fclose(aux);
    }

void read_file(List_1* L1, List_2* L2, List_3* L3){
    FILE* arq1 = fopen("table_1.dat","rb");
    char buffer[MAX],info[4][MAX] = {};
    int count = -1;
    strcpy(buffer, "");
    while(1){
        fread(buffer, sizeof(char), 50, arq1);
        printf("Buffer:%s\n",buffer);
        if(feof(arq1))
            break;
        count++;
        strcpy(info[count], buffer);
        if(count == 3){
            printf("%s0\n", info[0]);
            printf("%s1\n", info[1]);
            printf("%s2\n", info[2]);
            printf("%s3\n", info[3]);
            add_data_1(L1, info[0],info[1],info[2],info[3]);
            count = 0;
        }
    }
    fclose(arq1);
}