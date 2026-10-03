#include <stdio.h>
int fact(int n){
    int a = 1;
    for(int i=2;i<=n;i++){
        a = a*i;
    }
    return a;
}
int main(){
    int n;
    printf("enter a no :");
    scanf("%d",&n);
    int y = fact(n);
    printf("%d",y);
    return 0;
}