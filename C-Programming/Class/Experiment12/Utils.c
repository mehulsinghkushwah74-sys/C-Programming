#include "Utils.h"
#include<stdio.h>

void CreateMatrix(int m,int n,int arr[m][n]){
    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void PrintMatrix(int m, int n,int arr[m][n]){
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}