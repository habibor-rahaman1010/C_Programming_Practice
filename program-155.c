// string concatenate using built in function strcat in c progrm..
#include <stdio.h>
#include <string.h>
int main (){
    char x[20] = "Habibor";
    char y[20] = "Rahaman";

    strcat(x, y);
    printf("value of x is: %s \n", x);
    printf("value of y is: %s \n", y);
    return 0;
}
