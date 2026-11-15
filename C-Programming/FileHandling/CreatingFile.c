#include<stdio.h>
int main(){
    FILE* ptr = fopen("hello.txt","w");
    char str[] = "hell mahihfiu aiudhf";
    fputs(str,ptr);
    char tr[30];
    // while(fgets(tr,30,ptr) != NULL){
    //     printf("%s",tr);
    // }
    fclose(ptr);
}