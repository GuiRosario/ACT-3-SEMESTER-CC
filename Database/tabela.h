#ifndef tabela
#define tabela

#include <stdbool.h>

typedef struct node_data_1 Node_1;
typedef struct node_data_2 Node_2;
typedef struct node_data_3 Node_3;
typedef struct list_data_1 List_1;
typedef struct list_data_2 List_2;
typedef struct list_data_3 List_3;

Node_1* create_node_1(char* , char*, char* , char*);
Node_2* create_node_2(char*, char*, char*, char*, char*);
Node_3* create_node_3(char*, char*, char*);
List_1* create_list_1();
List_2* create_list_2();
List_3* create_list_3();
bool list_is_empty_1(const List_1*);
bool list_is_empty_2(const List_2*);
bool list_is_empty_3(const List_3*);
void data_delete_1(List_1*, int);
void data_delete_2(List_2*, int);
void data_delete_3(List_3*, int);
void data_modify_data_1(List_1*, int, char* , char*, char* , char*);
void data_modify_data_2(List_2*, int,char*, char*, char*, char*, char*);
void data_modify_data_3(List_3*,int,char*, char*, char*);
void add_data_1(List_1* , char* , char*, char* , char*);
void add_data_2(List_2* , char*, char*, char*, char*, char*);
void add_data_3(List_3* ,char*, char*, char*);
void print_data_1(const List_1*);
void print_data_2(const List_2*);
void print_data_3(const List_3*);
void destroy_linked_list_1(List_1**);
void destroy_linked_list_2(List_2**);
void destroy_linked_list_3(List_3**);
void print_nodes_1(const List_1*);
void print_nodes_2(const List_2*);
void print_nodes_3(const List_3*);
void transfer_data_1();
void transfer_data_2();
void transfer_data_3();
void read_file(List_1*, List_2*, List_3*);

#endif