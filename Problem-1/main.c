#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char str[] = "hello";
    rotateString(str, 2);
    printf("Rotated String: %s\n", str);  // Expected Output: "lohel"
    return EXIT_SUCCESS;
}
