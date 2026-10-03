#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        float salary;
        int age;
    }mehul,hella;
    
    strcpy(mehul.name,"mehul");
    mehul.salary = 2442.2;
    mehul.age = 18;

    strcpy(hella.name,"hella");
    hella.salary = 678.87;
    hella.age = 37;
    printf("%s",hella.name);
    printf("\n%d",mehul.age);
    return 0;
}