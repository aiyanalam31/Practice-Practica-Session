#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char str[] = "hello";
    reverseString(str);
    printf("Reversed: %s\n", str);
    return EXIT_SUCCESS;
}