#include <stdio.h>
int main(){
    int x, y;
    y = 5;
    x = 5;
    printf("Value of x is %d \n", x++);
    printf("Value of x is %d \n", ++x);

    x = 5;
    printf("Value of x is %d \n", ++x);
    printf("Value of x is %d \n", x++);

    //

    printf("Value of y is %d \n", y--);
    printf("Value of y is %d \n", --y);

    y = 5;
    printf("Value of y is %d \n", --y);
    printf("Value of y is %d \n", y--);
    return 0;
}
