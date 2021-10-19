#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if(argc > 1){
        char* str;
        int len = 0;
        for (int i = 1; i < argc; i++){
            len += strlen(argv[i]);
        }

        str= calloc(sizeof(char), len);

        for (int i = 1; i < argc; i++){
            strcat(str, argv[i]);
        }
        system(str);
    }
}
