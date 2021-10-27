#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sortFile(char * filePath){
    char symbol = ' ',  **arr = calloc(100,100);
    FILE *file = fopen(filePath, "r");
    int lines_count = 1;
    while (! feof(file)){
        if (fgetc(file) == '\n'){
            lines_count++;
        }
    } 
    char string[200];
    fseek(file, 0, SEEK_SET);
    for (size_t i = 0; i < lines_count;) {
        for (size_t j = 0; (symbol = fgetc(file)) != EOF; j++){
            string[i] = symbol;
            if (symbol == '\n'){ 
                j = 0; i++;
            }
            if (i == lines_count - 1){
                i++;
            }
        }
        printf("%s", string);
    }
    for (size_t i = 0; i < lines_count; i++){
        printf("%s",arr[i]);
    }
    fclose(file);
}