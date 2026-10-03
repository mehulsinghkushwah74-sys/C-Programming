#include <stdio.h>
void increasing(int x,int y){
    printf("%d\n",x);
    if(x==y){
        return ;
    }
    return increasing(x+1,y);

}
void decreasing(int n){
    printf("%d\n",n);
    if(n==1){
        return;
    }
    return decreasing(n-1);
}
int main(){
    int e;
    printf("enter a number :");
    scanf("%d",&e);
    decreasing(e);
    increasing(1,e)
    return 0;
}