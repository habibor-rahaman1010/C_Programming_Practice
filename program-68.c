/* Write a for loop which will print summation of all the numbers
   which are divided by 3 or 5 between 30 to 120...*/

#include <stdio.h>
int main(){
    int x, sum;
    sum = 0;
    for(x = 30; x <= 120; x++){
        if(x % 3 == 0 && x % 5 == 0){
            sum = sum + x;
        }
    }
    printf("The summation is : %d \n", sum);
    return 0;
}
