//In this question we are writing a program to print the multiplication of two given matrices given by the user.
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
    int a,b;
    printf("Enter the rows :");
    scanf("%d",&a);
    printf("Enter the coloumns :");
    scanf("%d",&b);
    int brr[a][b];
    for(int i = 0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(m==b){ 
     int res[n][b];
     for(int i=0;i<n;i++){ 
        for(int j=0;j<b;j++){
            res[i][j] = 0;
            for(int k=0;k<m;k++){
                res[i][j] = res[i][j] + arr[i][k]*brr[k][j];
            }
            printf("%d \n",res[i][j]);
        }
     }
     printf("\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<b;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
     }
    }
    else{
        printf("The multiplication of two givrn matrix is not possible");
    }

     
    return 0;
}