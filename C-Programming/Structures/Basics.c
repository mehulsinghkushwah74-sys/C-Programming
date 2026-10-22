// Structures are user defined data types in C.
// Using structures allows us to combine data of different types together.
// It is used to create complex data types which contains diverse information.
// They are very similar to array but structure can store data of any type, which is practically more useful.


#include<stdio.h>
#include<string.h>
int main(){ 

    // syntax
    
    // 1. Issme hum pehle hum first struct data types ko declare krte hai then do container mehul and arjun ko bna diya.
    
    struct student{
        char name[50];
        int age;
        int id;
    };

    struct student mehul , arjun;

    // mehul.name = "mehul";
    strcpy(mehul.name,"mehul");
    mehul.age = 18;
    mehul.id = 013;
    printf("%s",mehul.name);

    

    // 2. Issme hum variable ko declare krte hai uske sath hi mehul and arjun name ke container bna diye.

    // struct student {
    //     char name[50];
    //     int age;
    //     int id;
    // } mehul, arjun;

    // // arjun.name = "arjun";
    // arjun.age = 21;
    // arjun.id = 17;
    return 0;
}