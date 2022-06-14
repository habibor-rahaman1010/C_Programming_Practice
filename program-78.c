// 100 to 1 odd numbers find out C program, using while loop....
#include <stdio.h>
int main(){
    int x;
    x = 100;

    while(x >= 1){
        if(x % 2 != 0){
            printf("odd number are: %d \n", x);
        }
        x -= 1;
    }
    return 0;
}
