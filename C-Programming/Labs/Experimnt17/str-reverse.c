// In this Experiment I am trying to reverse the string
#include<stdio.h>
#include<string.h>
#include "MyMath.h"
int main(){
    char str[50];
    gets(str);
    int count = CountStringElement(str);
    int i=0;
    int j=count;
    while(i>j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    return 0;
}