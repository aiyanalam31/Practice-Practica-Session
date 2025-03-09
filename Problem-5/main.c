#include "answer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int arr[] = {10, 9, 2, 5, 3, 7, 101, 18};
    printf("LIS Length: %d\n", longestIncreasingSubsequence(arr, 8));
    return EXIT_SUCCESS;
}