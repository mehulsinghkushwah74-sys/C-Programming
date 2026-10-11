// In this Question we trying to WAP to add two number using a function
#include<stdio.h>
int sum(int a,int b);
int main(){
    float a,b;
    printf("Enter the first number :");
    scanf("%f",&a);
    printf("Enter the second number :");
    scanf("%f",&b);
    float add = sum(a,b);
    printf("The sum of the two given numbers is :%f",add);
    return 0;
}
int sum(int a,int b){
    int add = a+b;
    return add;
}