#include <stdio.h>
void swap(int *x,int *y){
   int temp = *x;
    *x = *y;
    *y = temp;
    return ;
}
int main(){
    int a,b;
    printf("enter a no a :");
    scanf("%d",&a);
    printf("enter a no b :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the numbers are %d %d",a,b);
    return 0;
}