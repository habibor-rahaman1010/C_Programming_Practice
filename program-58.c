// 0 to 100 odd number check in C program for loop using....
#include <stdio.h>
int main(){
    int x;
    for(x = 0; x <= 100; x++){
        if(x%2 != 0){
            printf("value of x: %d \n", x);
        }
    }
    return 0;
}
