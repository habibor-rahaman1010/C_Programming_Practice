// simple calculate 2 numbers by Add, Sub, Mull, Div in C program...
#include <stdio.h>
float add(int x, int y){
    float sum = x + y;
    return sum;
}

float Substraction(int x, int y){
    float sub = x - y;
    return sub;
}

float multiplycation(int x, int y){
    float multiply = x * y;
    return multiply;
}

float divide(int x, int y){
    float div = x / y;
    return div;
}

int main(){
    float x, y;
    printf("Enter the value of x and y : \n");
    scanf("%f %f", &x, &y);
    float addition_result = add(x, y);
    float substraction_result = Substraction(x, y);
    float multiply_result = multiplycation(x, y);
    float divide_result = divide(x, y);
    printf("Addition: %f, Substraction: %f, Division: %f, Multiplication: %f ", addition_result, substraction_result, multiply_result, divide_result);
return 0;
}
