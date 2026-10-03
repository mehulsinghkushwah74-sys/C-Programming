#include<stdio.h>
int main(){
    int arr[4][2];
    for(int  i = 0; i <=3;i++){
    printf("Enter the Roll No. of the student : ");
    scanf("%d",&arr[i][0]);
    }
    for(int  i = 0; i <=3;i++){
    printf("Enter the Mark onbtained by the student in roll number sequence : ");
    scanf("%d",&arr[i][1]);
    
    }
    printf("The stored Data is :\n");
    for(int i = 0; i<=3;i++){
        for(int j = 0;j<=1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}