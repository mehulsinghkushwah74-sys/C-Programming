#include<stdio.h>
#include "Matrix.h"
int main(){
    int a,b;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    CreateMatrix(a,b,arr);
    int trans[b][a];
    for(int i = 0;i<a;i++){
        for(int j=0;j<b;j++){
            trans[j][i] = arr[i][j];
        }
    }
    printf("Resultant Matrix\n");
    PrintMatrix(b,a,trans);
    return 0;
}