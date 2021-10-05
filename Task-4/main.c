#include <stdlib.h>
#include <stdio.h>
#include "arrayList.h"

int main(int argc, char const *argv[]){
    
    ArrayList* list = newArrayList();


    for (int i = 0; i < 5; i++){
        add(list,i);
    }

    insert(list,2,666);
    removeItem(list,2);
    set(list,2,333);
    for (int i = 0; i < size(list); i++){
        printf("%d  ", get(list,i));
    }
    printf("\n");
  
    return 0;
}
