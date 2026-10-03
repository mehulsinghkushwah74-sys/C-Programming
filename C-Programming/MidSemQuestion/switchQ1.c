#include <stdio.h>
int main(){
    int x = 2;
    switch(x){
    case 1 : printf("apple\n");
    case 2 : printf("mango\n"); // yha condtion 2 match ho gyi thi pr break statement nhu toh age jump kr jata hai or bhale hi condition match nhh ho jab tak break nhh mil jaye
    case 3 : printf("banana\n");
    case 4 : printf("watermelon\n");
                break;
    case 5 : printf("tomato");
    default : printf(" invalid input");

    }
    return 0;
}