#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sortFile(char * filePath){
    char symbol = ' ';
    FILE *file = fopen(filePath, "r");
    char string[200] = "";
    char **arr = calloc(10, sizeof(char*)) ;
    size_t i = 0;
    int lines_count = 1;
    while (! feof(file)){
        if (fgetc(file) == '\n'){
            lines_count++;
        }
    } 
    printf("%d\n",lines_count);
    fseek(file, 0, SEEK_SET);
    for (; i < lines_count; i++) {
        for (size_t j = 0; (symbol = fgetc(file)) != EOF; j++){
            printf("%c",symbol);
            if (symbol == '\n') {
                j = 0; 
            }
            //сука 27 строка бл 
            //arr[i][j] = symbol;
        }
    }
    for (size_t j = 0; j < i; j++)
    {
        printf("\n%s", arr[j]);
    }
    fclose(file);
}