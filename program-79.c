// even numbers find out C program, using while loop....user input
#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter your start and end value: ");
    scanf("%d", &x);
    scanf("%d", &y);

    while(x <= y){
        if(x % 2 == 0){
            printf("Your even number are: %d \n", x);
        }
        x += 1;
    }
    return 0;
}
