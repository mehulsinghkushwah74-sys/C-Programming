#include <stdio.h>
#include "Matrix.h"
int main()
{
    int n, m;
    printf("First Matrix\n");
    printf("Enter the rows :");
    scanf("%d", &n);
    printf("Enter the coloumns :");
    scanf("%d", &m);
    int arr[n][m];
    CreateMatrix(n, m, arr);
    int a, b;
    printf("Second Matrix\n");
    printf("Enter the rows :");
    scanf("%d", &a);
    printf("Enter the coloumns :");
    scanf("%d", &b);
    int brr[a][b];
    CreateMatrix(a, b, brr);

    if (m == a){
        int res[n][b];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < b; j++){
                res[i][j] = 0;
                for (int k = 0; k < m; k++){
                    res[i][j] = res[i][j] + arr[i][k] * brr[k][j];
                }
            }
        }
        printf("\n");
        PrintMatrix(n,b,res);
    }
    else
    {
        printf("The multiplication of two given matrix is not possible");
    }
    return 0;
}