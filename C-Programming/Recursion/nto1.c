#include <stdio.h>
void yum(int n){
    if(n==0){
        return ;
    }
    printf("%d\n",n);
    yum(n-1);

    return ;
}
int main(){
    int n;
    printf("enter a no :");
    scanf("%d",&n);
    yum(n);
    return 0;
}