//Array defined in C programming language....
#include <stdio.h>
int main(){
    int x[6] = {23, 34, 59, 35 ,56, 37};
    printf("%d \n", x[2]);
    x[2] = 40; // value update of index 2...
    printf("%d \n \n", x[2]);

    int i;
    for(i = 0; i < 6; i+=1){
        printf("%d \n", x[i]);
    }

    return 0;
}

