#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        printf("*");
        for(int k = 1;k<=i-1;k++){
            printf(" ");
        }
        for(int a = 1;a<=i-2;a++){
            printf(" ");
        }
        if(i!=1){
            printf("*");
        }
        printf("\n");
    }
    int b=n;
    for(int i = 1; i<=n-1;i++){
        for(int j =1;j<=i;j++){
            printf(" ");
        }
        printf("*");
        for(int k = 1; k<=b;k++){
            printf(" ");
        }
        if(i!=n-1){
            printf("*");
        }
        printf("\n");
        b=b-2;
    }
    return 0;
}