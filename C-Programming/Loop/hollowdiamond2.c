#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=2*n-1;j++){
            if(j==n-i+1 || j==n+i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int a = 1;a<=n-1;a++){
        for(int b=1;b<=2*n-1;b++){
            if(b==a+1 || b==2*n-1-a){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}