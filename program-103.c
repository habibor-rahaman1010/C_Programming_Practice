// pattern design in C program...
#include <stdio.h>
int main(){
    int i, j;

    for(i = 1; i <= 10; i += 1){
        for(j = i; j <= 10; j += 1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
