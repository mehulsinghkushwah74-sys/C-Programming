#include <stdio.h>
int power(int a, int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
int main(){
    int a;
    printf("Enter the base number :");
    scanf("%d",&a);
    int b ;
    printf("Enter the power number :");
    scanf("%d",&b);
    int x = power(a,b);
    printf("%d to the power %d is :%d",a,b,x);
    return 0;
}