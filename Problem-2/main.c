#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int result = kthLargest(arr, 7, 2);
    printf("K-th Largest Element: %d\n", result);
    return EXIT_SUCCESS;
}