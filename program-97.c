//Nested for loop in C programming....
#include <stdio.h>
int main(){
    int x, y;

    for(x = 1; x <= 2; x += 1){
        printf("Start outer for loop! \n");
        for(y = 1; y <= 4; y += 1){
            printf("Hello programmer, I am inner for loop! \n");
        }
        printf("End outer for loop! \n \n");
    }
    return 0;
}
