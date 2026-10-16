#include<stdio.h>
#include "Matrix.h"
int main(){
    int a,b;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    printf("Enter the number of columns: ");
    scanf("%d",&b);
    int arr[a][b];
    int brr[a][b];
    printf("\nFirst Matrix \n");
    CreateMatrix(a, b, arr);
    printf("\nSecond Matrix \n");
    CreateMatrix(a, b, brr);
    int crr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("\nThe resultant Matrix is :\n");
    PrintMatrix(a, b, crr);
    return 0;
}