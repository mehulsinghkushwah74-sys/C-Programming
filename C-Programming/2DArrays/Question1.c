// In this question we have gieven a matrix a of dimension m cross n and 2 coordinates l1,r1 and l2,r2 return the sum of the rectangle from l1,r1 to l2,r2
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the rows :");
    scanf("%d",&n);
    printf("Enter the coloumns :");
    scanf("%d",&m);
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a,b,c,d;
    printf("Enter the coordinates first then second");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    // int arr1[2] = {a,b};
    // int arr1[2] = {c,d};
    int sum = 0;
    for(int i = a;i<=c;i++){
        for(int j = b;j<=d;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("%d",sum);


    return 0;
}