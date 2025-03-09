#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    printf("Lines in file: %d\n", countLines("test.txt"));
    return EXIT_SUCCESS;
}