// Distance Addition:

// Create a struct Distance with members feet (integer) and inches (float). Write a function that takes two distance structures, adds them, and normalizes the result so that inches is strictly less than 12.0.

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct distance{
        int feet;
        float inches;
    }distance;
    distance arr[2];
    for(int i = 0;i<2;i++){
        printf("Enter the %d distance: ",i+1);
        scanf("%d",&arr[i].feet);
        scanf("%f",&arr[i].inches);
    }
    int totalfeet = arr[0].feet + arr[1].feet;
    float totalinches = arr[0].inches + arr[1].inches;
    if(totalinches >= 12){
        int temp = totalinches/12;
        totalfeet = totalfeet + temp;
        totalinches = totalinches - (temp*12);
        printf("%dft %fin",totalfeet,totalinches);
    }
    else{
        printf("%dft %fin",totalfeet,totalinches);
    }
    
    return 0;
}