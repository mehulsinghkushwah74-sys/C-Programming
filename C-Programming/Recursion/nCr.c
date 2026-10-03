#include <stdio.h>
#include "my_hello.c"
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int r;
    printf("Enter a number :");
    scanf("%d",&r);
    int x = ncr(n,r);
    if(x==0){
         printf("Invalid output\n");
    }
    else  {printf("The %dC%d is : %d",n,r,x);}
    return 0;
}