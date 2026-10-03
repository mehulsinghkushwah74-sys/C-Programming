#include <stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);;

}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int y = sum(n);
    printf("sum is %d",y);
    return 0;
}