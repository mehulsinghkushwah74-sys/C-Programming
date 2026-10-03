#include <stdio.h>
void counter(){
    static int count = 10; // static me memory retain rehti hai agar humne ise dubara call kiya toh ye apni pehli wali value bhool kr jo value assign hui thi usse lega example pehle 10 then fir 5 add krne ke baad 15 toh next me wo 10 nhi 15 hi value lega 
    auto int temp = 5; // auto me memory lose hoo jati function band hone ke baad so har baar if hum counter ko call krenge toh wo temp ki value 5 hi dega
    count += 5;
    temp += 5;
    printf("count = %d,temp = %d \n", count,temp);
}
int main(){
    counter();
    counter();
    return 0;
}