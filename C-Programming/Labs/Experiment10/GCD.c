#include<stdio.h>
int main(){
    int a,b;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);
    int min = 0;
    if(a>b){
        min = b;
    }
    else{
        min = a;
    }
    for(int i = min;min!=0;min--){
        if(a%min == 0 && b%min == 0){
            printf("%d",min);
            break;
        }
    }
    return 0;
}