#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char src[] = "hello";
    char dest[10];
    myMemcpy(dest, src, 6);
    printf("Copied String: %s\n", dest);
    return EXIT_SUCCESS;
}