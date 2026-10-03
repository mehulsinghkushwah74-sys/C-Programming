#include <stdio.h>
int sum(int a,int b){
    return a+b ;
}
int main(){
    int a,b;
    printf("enter to numbers :");
    scanf("%d %d",&a,&b);
    int add = sum(a,b);
    printf("the sum of the two no is %d",add);
    return 0;
}