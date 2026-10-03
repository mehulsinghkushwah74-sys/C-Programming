// In this question we are creating a structure type 'book' with name, price and number of pages as its attributes
#include<stdio.h>
#include<string.h>
int main(){
    // struct  book
    // {
    //     char name[50];
    //     float price;
    //     int pages;
    // }a,b,c;

    // struct book a;
    // struct book b; 
    // struct book c;

    // a.pages = 140;
    // a.price = 500;
    // strcpy(a.name,"secret seven");
    // // a.name = "secret7";
    // printf("%d ",a.pages);
    // printf("%f ",a.price);
    // printf("%s ",a.name);
    
    typedef struct  book {
        char name[50];
        float price;
        int pages;
    }hel;
    // isse kya hota hai ki ab hume baar baar struct book a ,b,c,d likhne ki jarurat nhi hai bs hel likho and ek object ban jayega
    hel a;
    hel b;
    hel c;

    a.pages = 140;
    a.price = 500;
    strcpy(a.name,"secret seven");
    // a.name = "secret7";
    printf("%d ",a.pages);
    printf("%f ",a.price);
    printf("%s ",a.name);

    return 0;
}