// array value input form use floating value...in C program
#include <stdio.h>
int main(){
    int i;
    float x[5];

    for(i = 0; i < 5; i++){
        printf("Enter your array value: ");
        scanf("%f", &x[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%f \n", x[i]);
    }
    return 0;
}

