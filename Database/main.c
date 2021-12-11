#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tabela.h"

int main(){
    List_1* lista1 = create_list_1();
    List_2* lista2 = create_list_2();
    List_3* lista3 = create_list_3();

    read_file(lista1,lista2,lista3);
    print_nodes_1(lista1);


    /*
    add_data_1(lista1,"guilherme","cc","123","mateus");
    add_data_1(lista1,"marcos","CC","456","goiaba");
    add_data_1(lista1,"rafael","Cc","789","banana");
    add_data_1(lista1,"joao","DR","754","abacate");
    add_data_1(lista1,"pedro","MD","843","figo");
    add_data_1(lista1,"augusto","HT","576","maca");
    add_data_1(lista1,"cristina","PT","532","limao");
    add_data_1(lista1,"angela","AP","863","laranja");
    add_data_1(lista1,"crisalis","FS","546","acerola");
    print_nodes_1(lista1);

    add_data_2(lista2,"rafa","Ccs","78934","uva","sdkfjsd");
    add_data_2(lista2,"jo","DRs","75445","pitanga","ertert");
    add_data_2(lista2,"ped","MDs","84334","pitaya","vmcnb");
    add_data_2(lista2,"august","HTs","57656","tomate","iujhdfgioud");
    data_delete_2(lista2,2);
    data_modify_data_2(lista2,3,"augustaosemsaco","NC","834958","caqui","ksdfmnsdf");

    add_data_3(lista3,"guilherme3","cc","123");
    add_data_3(lista3,"marcos3","CC","456");
    add_data_3(lista3,"rafael3","Cc","789");
    add_data_3(lista3,"joao3","DR","754");
    add_data_3(lista3,"pedro3","MD","843");
    add_data_3(lista3,"augusto3","HT","576");
    add_data_3(lista3,"cristina3","PT","532");
    add_data_3(lista3,"angela3","AP","863");
    add_data_3(lista3,"crisalis3","FS","546");
    data_modify_data_3(lista3,9,"koichi","PS","311");
    data_delete_3(lista3,9);
    print_nodes_3(lista3);
    
     
    destroy_linked_list_1(&lista1);
    destroy_linked_list_2(&lista2);
    destroy_linked_list_3(&lista3);
    */
    return 0;
}
