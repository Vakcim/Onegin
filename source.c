#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sortFile(char * filePath){
    char symbol;
    FILE *file = fopen(filePath, "r");
    char string [200];
    //char **arr = (char**)malloc(length*sizeof(char*));
    int i = 0;
    while ((symbol = getc(file)) != EOF)
    {
        string[i] = symbol;
        i++;
    }
    printf("%s",string);
    
    fclose(file);
}