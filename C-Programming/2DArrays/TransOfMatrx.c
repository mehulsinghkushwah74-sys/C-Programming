#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the rows :");
    scanf("%d",&n);
    printf("Enter the coloumns :");
    scanf("%d",&m);
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int newarr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            newarr[i][j] = arr[j][i]; 
        }
    }
    for(int i = 0; i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",newarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}