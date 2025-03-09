#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int a = 3;
    int b = 7;
    swap(&a, &b);
    printf("Swapped values: %d %d\n", a, b);
    return EXIT_SUCCESS;
}