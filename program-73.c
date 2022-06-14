// 1 to 100 odd numbers find out C program, using while loop....
#include <stdio.h>
int main(){
    int x;
    x = 1;

    while(x <= 100){
        printf("odd number are: %d \n", x);
        x += 2;
    }
    return 0;
}
