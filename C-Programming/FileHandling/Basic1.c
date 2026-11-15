#include<stdio.h>
int main(){
    // FILE* ptr = fopen("mehul.txt","r");
    // char str[100];

    // if(fgets(str,100,ptr) != NULL){
    //     printf("%s",str);
    // } // ye ek line ko print kr dega

    // while(fgets(str,100,ptr) != NULL){
    //     printf("%s",str);
    // }// ye sab kuch print kr dega

    // Creating a file

    FILE* p = fopen("new.txt","w");
    char h[] = "padho likho aage badho";
    fputs(h,p);
    while(fgets(h,50,p)!= NULL){
        printf("%s",h);
    }

    fclose(p);
    return 0;
}