#include <stdio.h>
int main(){
    // int arr[2][3];
    // it means that a array with 2 rows and 3 coloumns has been created
    // remember that rows and coloum start with always  with 0
    // arr[][3] and arr[2][3]; this is also correct 
    int arr[2][2] = {{1,2},{3,4}};
    for(int i = 0; i<=1;i++){
        for(int j = 0;j<=1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}