// Nested if else condition on C Program...
#include <stdio.h>
int main(){
    int x;
    printf("Enter a input your: ");
    scanf("%d", &x);

    if(x == 1){
        printf("Hello you are a legend!");
    }
    else if(x == 2){
        printf("You are a great person!");
    }
    else if(x == 3){
        printf("You are a amazing person!");
    }
    else{
        printf("Please type 1 or 2 or 3, print amazing text!");
    }

    return 0;
}
