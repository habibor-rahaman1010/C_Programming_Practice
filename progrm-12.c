#include <stdio.h>
int main(){
    float X, Y, Z, answer;
    X = 34.23;
    Y = 65.34;
    Z = 23.65;
    answer = X + Y + Z;
    printf("The answer is: %.2f \n", answer); //%f this is pointer number place holder, %.2f means floating point after 2 digit value showing...
    return 0;
}
