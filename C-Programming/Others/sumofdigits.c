#include <stdio.h>
int main(){
    int n;
    int x = n;
    printf("Enter a number :");
    scanf("%d",&n);
    int count = 0;
    for(int i=1;i<=x;i++){
       int a = n%10;
        count = count + a;
        if(n/10 == 0){
        break;}
        n = n/10;
    }
    printf("the sum of the digits is %d",count);
    int y = 1%10;
    printf("\n%d",y);
    return 0;
}