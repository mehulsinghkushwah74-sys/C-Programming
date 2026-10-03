#include <stdio.h>
int main(){
    int n;
    printf("Enter a number of lines :");
    scanf("%d",&n);
    for(int i = 1; i <= n;i++){
        for(int k = 0; k<i;k++){
            printf("  ");
        }
        for(int j = 1; j<=2*(n-i);j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(int k =1;k<=n-i;k++){
            printf("  ");
        }
        for(int j = 1;j<=2*i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}