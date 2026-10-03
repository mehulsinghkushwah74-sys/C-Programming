#include <stdio.h>
#include<string.h>
int main(){
    char str[45];
    scanf("%[^\n]s",str);
    int i = 0;
    int size = 0;
    while(str[i]!='\0'){
        size++;
        i++;

    }
    // printf("%d",size);
    for(int i = 0 ,j = size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);

    return 0;
}