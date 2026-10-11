#include "Utils.h"

#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows : %d",m);
    scanf("%d",&m);
    printf("Enter the number of columns : %d",n);
    scanf("%d",&n);
    int A[m][n],B[n][m];
    CreateMatrix(m,n,A);
    PrintMatrix(m,n,A);
    for(int i= 0;i<m;i++){
        for(int j = 0;j<n;j++){
            B[j][i] = A[i][j];
        }
    }
    PrintMatrix(n,m,B);
    return 0;
}