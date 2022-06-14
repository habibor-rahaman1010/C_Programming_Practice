//print the summation of squares of all numbers 5 to 25
#include <stdio.h>
int main(){
    int i, sum;
    sum = 0;

    for(i = 5; i <= 25; i+=1){
        sum = sum + (i * i);
    }
    printf("5 To 25 square and summation = %d", sum);
    return 0;
}
