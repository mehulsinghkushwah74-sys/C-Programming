// In this we are trying to rotate a matrix by 90 degree in clockwise direction
#include<stdio.h>
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
    //Transpose
    int d = 0;
    for(int i= 0;i<n;i++){
        for(d;d<n;d++){
            int temp = arr[i][d];
            arr[i][d] =arr[d][i];
            arr[d][i] = temp;
        }
        d = d+1;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //Rotate 90 degree
    for(int i=0;i<n;i++)
    {
        int j = 0;
        int k = n-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
    }
    }
        printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}