// STATIC : which means that the memory is allocated during compile time.

// ye program run hone se pehle pta hai ki iski memory 5 bytes hai 4 int , 1 char 
#include<stdio.h>
int main(){
    int n = 4;
    char ch = 'd';
    printf("%d %c", n, ch);
    return 0;
}

// DYNAMIC : which means that the memory is allocated during run time.

// ye program run hone se pehle ise pta nhi hai ki ye kinti memory lega toh ye bhot memory allocate krke rakh leta hai kyuli compiler ko arr ka size ota nhi hai isliye
// or ye run time ke samy memory leta hai
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
