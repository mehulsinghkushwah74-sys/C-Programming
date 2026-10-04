// In this question we have take date as input from the user
// and if the dates are equal print equal otherwise unequal
#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    date a,b;

    printf("Enter the date :");
    scanf("%d",&a.date);
    // note : structures me scan krte samy hun & ka use nhi krte
    printf("Enter the month of the year : ");
    scanf("%d",&a.month);

    printf("Enter the year :");
    scanf("%d",&a.year);
    
    printf("Enter the date :");
    scanf("%d",&b.date);
    // note : structures me scan krte samy hun & ka use nhi krte
    printf("Enter the month of the year : ");
    scanf("%d",&b.month);
    printf("Enter the year :");
    scanf("%d",&b.year);

    // if(a == b){
    //     printf("Equal");
    // } 
    // ese hum do structures ko compare nhi kr skte 
    // Method-1
    // if(a.date == b.date && a.month == b.month && a.year == b.year){
    //     printf("Equal");
    // }
    // else{
    //     printf("Unequal");
    // }

    // Method-2
    bool flag = true;
    if(a.date != b.date) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;
    
    if(flag == true) printf("The dates are equal");
    else printf("The dates are unequal");
    return 0;
}