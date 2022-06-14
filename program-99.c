#include <stdio.h>
int main(){
    int x, y, j;

    for(x = 1; x <= 2; x++){
        printf("This is my first loop loop here--------- \n");

        for(y = 1; y <= 4; y++){
            printf("This is my 2nd inner loop here! \n");

            for(j = 1; j <= 5; j++){
                printf("This is my third loop here! \n");
            }
        }
        printf("\n \n");
    }
    return 0;
}

