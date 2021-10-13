#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
#include "load.h"

int main()
{
    int q = 0;
    int a = 0;

    while (q == 0){
        printf("1. Matrix\n2. Mass\n0. Exit\n");
        scanf("%d", &a);
        switch(a){
            case 1:{
                LoadRun("matrix.dll", 1);
                break;
            }
            case 2:{
                LoadRun("array.dll", 2);
                break;
            }
            case 0:{
                q = 1;
                break;
            }
        }
    }
    return 0;
}
