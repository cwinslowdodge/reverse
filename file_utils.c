//
// Created by Charles on 1/30/2017.
//

#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int read_file(char* filename, char **buffer){

    FILE *input;
    input = fopen(filename, "r");

    struct stat st;
    stat(filename, &st);
    int size = st.st_size;

    *buffer = malloc(size * sizeof(char));
    fread(*buffer, size, 1, input);
    fclose(input);
    return size;
}

int write_file(char* filename, char *buffer, int size){

    FILE *output;
    output = fopen(filename, "w");

    for(int i=size-1 ; i>=0; i--){
        fwrite(buffer + i,1,1, output);
    }
    fclose(output);

    return 0;
}
