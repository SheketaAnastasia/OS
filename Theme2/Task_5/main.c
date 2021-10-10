#include <stdlib.h>
#include <stdio.h>
#include "linkedList.h"

int main(int argc, char const *argv[]){
    
    LinkedList* list = newLinkedList();


    for (size_t i = 0; i < 10; i++){
        add(list,i);
    }

    insert(list,0,9999);
    removeItem(list,0);
    set(list,5,500);
    removeItem(list,5);

    Node* tmp = list->root; 
    for (size_t i = 0; i < size(list); i++){
        printf("%d  ", get(list,i));
    }
    printf("\n");
  
    return 0;
}
