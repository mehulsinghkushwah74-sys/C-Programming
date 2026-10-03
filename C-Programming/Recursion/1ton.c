#include <stdio.h>
void increasing( int x ,int n){
    printf("%d\n",x);
    if(x==n){
        return ;
    }
    x = x + 1;
    
    return increasing(x,n);
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}