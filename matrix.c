#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include "fun.h"

void outMatrix(int **, int, int);

void matrixFunc() {

    system("chcp 65001");
    srand(time(NULL));
    int matrixRow = 7, matrixColumn = 8;
    int **ptrMatrix = (int **) malloc(matrixRow * sizeof(int *));

    for (int i = 0; i < matrixRow; ++i) {
        ptrMatrix[i] = (int *) malloc(matrixColumn * sizeof(int));
    }

    for (int i = 0; i < matrixRow; ++i) {
        for (int j = 0; j < matrixColumn; ++j) {
            ptrMatrix[i][j] = rand() % 100 - 50;
        }
    }

    for (int i = 0; i < matrixRow; i++) {
        for (int j = 0; j < matrixColumn; j++) {
            printf("%d\t", ptrMatrix[i][j]);
            if (j == 7) puts("\n");
        }
    }

    int a = 0;
    int Amin = 0;

    for (int i = 0; i < matrixRow; ++i) {
        for (int j = 0; j < matrixColumn; ++j) {
            if (a==0 && ptrMatrix[i][j] < 0)
            {
                Amin = ptrMatrix[i][j];
                a = 1;
            }
            else if (Amin > ptrMatrix[i][j] && ptrMatrix[i][j] < 0)
                Amin = ptrMatrix[i][j];
        }
    }
    printf("Min from negative is %d", Amin);
    puts("\n");
    system("pause");
}

void outMatrix(int **matrix, int matrix_row, int matrix_column) {
    for (int i = 0; i < matrix_row; ++i) {
        for (int j = 0; j < matrix_column; ++j) {
            printf("%d\t", matrix[i][j]);
            if (j == 7) puts("\n");
        }
    }
}
