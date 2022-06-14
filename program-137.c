//Two dimensional array print and there value sum and average print, take input form user...
#include <stdio.h>
int main(){
    int x[3][3], i, j, sum =  0;

    printf("Enter your input here: \n");
    for(i = 0; i < 3; i+=1){ // for row
        for(j = 0; j < 3; j+=1){ // column
           scanf("%d", &x[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < 3; i+=1){
        for(j = 0; j < 3; j+=1){
           printf("%d ", x[i][j]);
           sum = sum + x[i][j];
        }
        printf("\n");
    }
    printf("Total summation of x two dimensional array: %d \n", sum);
    float average = sum / 3.0;
    printf("Average of x two dimensional array: %f", average);
    return 0;
}
