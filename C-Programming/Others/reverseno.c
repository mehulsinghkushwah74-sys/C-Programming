#include <stdio.h>
int main(){
    int x,y;
    printf("enter two numbers :");
    scanf("%d\n %d",&x,&y);
    int temp = x;
    x = y;
    y = temp;
    printf("the reverse of the two numbers is : %d %d",x,y);
    return 0;
}