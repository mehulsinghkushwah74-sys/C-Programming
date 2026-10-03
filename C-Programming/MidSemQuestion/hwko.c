#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int count = 0;
    int a = n; 
    while(a > 0){
        a = a/10;
      count++;   
    }
    printf("%d",count);
    int i = 1;
    int y = 0;
    a = n;
    while(a > 0){
        int x = a%10;
        a = a/10;
        y = y + (x*x*x);GCD
    }
    printf("%d",y);
    if(y == n){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}