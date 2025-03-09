#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    printf("Missing Number: %d\n", findMissingNumber(arr, 7));
    return EXIT_SUCCESS;
}