#include <stdio.h>
int add(int a, int b);
int main(){
    int a,b,result;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    result = add(a,b);

    printf("Sum: %d ",result);
    return 0;
}
int add(int a, int b){
    return a+b;
}