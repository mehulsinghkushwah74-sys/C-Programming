// Student Record Storage:
// Define a struct Student containing name (string), roll_no (integer), and marks (float array of size 5). Write a program to read and display details of a student, including their total and percentage marks.

// OPTION 1.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     typedef struct student{
//         char name[50];
//         int Rollno;
//         int marks[5];
//     }hel;
//     hel mehul = {
//         .name = "mehul",
//         .Rollno = 13,
//         .marks = {1,3,4,5,6}
//     };

//     printf("%d",mehul.Rollno);
//     printf("%s",mehul.name);
//     printf("%d",mehul.marks[2]);

//     return 0;
// }

// OPTION 2.

#include<stdio.h>
#include<string.h>
int main(){
    struct student {
        char name[50];
        int Rollno;
        int marks[5];
    }mehul;

    strcpy(mehul.name , "mehul");
    mehul.Rollno = 13;

    // NOTE: Hum ese kisi array ko define nhi kr skte 

    int temp[] = {1,23,4,56,6};

    memcpy(mehul.marks,temp,sizeof(temp));
    printf("%d",mehul.Rollno);
    printf("%s",mehul.name);
    printf("%d",mehul.marks[2]);
    return 0;
}

// OPTION 3.

#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[60];
        int rollno;
        int marks[5];
    };

    struct student mehul;
    

    return 0;
}

