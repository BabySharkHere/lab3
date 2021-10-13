#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include "fun.h"

void outArray(int *, int);

void arrayFunc() {
    system("chcp 65001");
    srand(time(NULL));
    int arraySize = 36;
    int *matrix = (int *) malloc(arraySize * sizeof(int));
    for (int i = 0; i < arraySize; ++i) {
        matrix[i] = rand() % 101 - 50;
    }
    outArray(matrix, arraySize);
    int a = 0;
    int Bmin = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (a == 0 && matrix[i] < 0)
        {
            Bmin = matrix[i];
            a = 1;
        }
        else if (Bmin > matrix[i] && matrix[i] < 0)
            Bmin = matrix[i];
    }
    printf("\nMin from negative is %d", Bmin);
    puts("\n");
    system("pause");
}

void outArray(int *ptrArray, int array_size) {
    for (int i = 0; i < array_size; ++i)
        printf("%d\t", ptrArray[i]);
}
