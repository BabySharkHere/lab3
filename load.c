#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <windows.h>

void LoadRun(const char *fileName, int i) {
    void *pLibrary;
    void (*pFunction)();
    pLibrary = LoadLibrary(fileName); //загрузка библиотеки в память;
    if (!pLibrary) {
        printf("can not open library '%fileName'\n", fileName);
        return;
    }
    if (i == 1){
        pFunction = (void (*)()) GetProcAddress((HINSTANCE) pLibrary, "matrixFunc"); //получение указателя на функцию из библиотеки;
        if (pFunction == NULL) {
            printf("can not load function func\n");
        } else {
            pFunction();
        }
    }
    if (i == 2){
        pFunction = (void (*)()) GetProcAddress((HINSTANCE) pLibrary, "arrayFunc"); //получение указателя на функцию из библиотеки;
        if (pFunction == NULL) {
            printf("can not load function func\n");
        } else {
            pFunction();
        }
    }
    FreeLibrary((HINSTANCE) pLibrary); //выгрузка библиотеки;
}
