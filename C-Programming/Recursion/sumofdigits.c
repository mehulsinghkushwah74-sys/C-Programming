#include <stdio.h>
int sum(int n){
    int x = n%10;
    if(n<10){
        return x;  
    }
    return x+sum(n/10);
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int y = sum(n);
    printf("sum is : %d",y);

    return 0;
}