#include "MyMath.h"
#include <stdio.h>

int add(int a, int b){
    return a+b;
}

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

int CountStringElement(char *str){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

void ReverseOfWord(char *arr){
    int i = 0;
    int count = CountStringElement(char arr);
    int j = count;
    while(i<j){
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}