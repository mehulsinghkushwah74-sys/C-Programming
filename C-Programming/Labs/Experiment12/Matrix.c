#include "Matrix.h"
#include<stdio.h>
int CreateMatrix(int rows, int cols, int arr[rows][cols]){
    printf("Enter Matrix element: \n");
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}

void PrintMatrix(int rows, int cols, int arr[rows][cols]){
        for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
