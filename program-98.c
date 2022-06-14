#include <stdio.h>
int main(){
    int x, y;

    for(x = 1; x <= 2; x++){
        printf("This is my outer loop here--------- \n");

        for(y = 1; y <= 4; y++){
            printf("This is inner loop here! \n");
        }
        printf("\n \n");
    }

    return 0;
}
