// odd numbers find out C program, using while loop....user input, small to big
#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter your start and end value, small to big integer: ");
    scanf("%d", &x);
    scanf("%d", &y);

    while(x <= y){
        if(x % 2 != 0){
            printf("Your odd number are: %d \n", x);
        }
        x += 1;
    }
    return 0;
}
