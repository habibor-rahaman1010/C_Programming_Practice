// array value input form use integer value...in C program
#include <stdio.h>
int main(){
    int i;
    int x[5];

    for(i = 0; i < 5; i++){
        printf("Enter your array value: ");
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%d \n", x[i]);
    }
    return 0;
}
