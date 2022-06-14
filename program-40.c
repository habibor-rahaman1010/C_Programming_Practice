//switch case in C program user input...float number not allowed..
#include <stdio.h>
int main(){
    int x;
    printf("Enter your case input: ");
    scanf("%d", &x);

    switch(x){
    case 1:
        printf("This is case 1");
        break;
    case 2:
        printf("This is case 2");
        break;
    case 3:
        printf("This is case 3");
        break;
    default:
        printf("Unknown this is case");
    }
    return 0;
}
