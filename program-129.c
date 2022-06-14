//Tack an array and input from user and all array value summation.......
#include <stdio.h>
int main(){
    int x[10];
    int i;
    int sum = 0;
    printf("Enter your input here: \n");

    for(i = 0; i <10; i++){
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 10; i++){
        sum = sum + x[i];
    }
    printf("All array values numbers summations: %d \n", sum);

    return 0;
}
