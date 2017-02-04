//
// Created by Charles on 1/30/2017.
//

#include <stdio.h>
#include <malloc.h>
#include "file_utils.h"


int main(int argc, char **argv){

    char* input = argv[1];
    char* output = argv[2];
    char* buffer;

    int size = read_file(input, &buffer);
    write_file(output, buffer, size);

    free(buffer);

    return 0;

}