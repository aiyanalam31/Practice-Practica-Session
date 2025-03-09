#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    printf("Balanced: %d\n", isBalanced("{[()]}")); // Expected: 1
    printf("Balanced: %d\n", isBalanced("{[(])}")); // Expected: 0
    return EXIT_SUCCESS;
}