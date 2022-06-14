//switch case in C program...
#include <stdio.h>
int main(){
    char x;
    x = 'B';

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

