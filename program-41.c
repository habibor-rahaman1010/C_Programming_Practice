//switch case in C program user input...float number not allowed..
#include <stdio.h>
int main(){
    char x;
    printf("Enter your case input: ");
    scanf("%c", &x);

    switch(x){
    case 'A':
        printf("This is case 'A'");
        break;
    case 'B':
        printf("This is case 'B'");
        break;
    case 'C':
        printf("This is case 'C'");
        break;
    default:
        printf("Unknown this is case");
    }
    return 0;
}

