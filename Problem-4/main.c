#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int arr[] = {4, 2, 8, 1};
    sortArray(arr, 4);
    printf("Sorted array: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    return EXIT_SUCCESS;
}