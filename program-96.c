//100, 95, 90......0 output, C program
#include <stdio.h>
int main(){
    int x;
    x = 100;
    do{
        printf("value of x: %d \n", x);
        x -= 5;
    }while(x >= 0);

    return 0;
}
