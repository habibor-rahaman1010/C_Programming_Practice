// Array Concept in C programming....
#include <stdio.h>
int main(){
    int x[7];
    x[0] = 20, x[1] = 25, x[2] = 30, x[3] = 15, x[4] = 100, x[5] = 50, x[6] = 70;
    printf("%d \n", x[5]);

    int sum = x[0] + x[5];
    printf("%d \n", sum);

    x[5] = 300; // index 5 value update  to 300
    sum = x[0] + x[5];
    printf("%d \n", sum);

    x[0] = 400; // index 0 value update  to 400
    sum = x[0] + x[5];
    printf("%d \n", sum);

    return 0;
}
