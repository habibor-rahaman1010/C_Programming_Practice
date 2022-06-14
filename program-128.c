 // how to find out Even number on an array and this numbers summations, C program....
#include <stdio.h>
int main(){
    int array[15] = {23, 345, 56, 435, 32, 45, 56 ,45 ,78, 155, 12, 34, 56, 45, 50};
    int i;
    int sum = 0;
    for(i = 0; i < 15; i+=1){
        if(array[i]%2 == 0){
            printf("%d \n", array[i]);
            sum = sum + array[i];
        }
    }
    printf("All even numbers summations here: %d", sum);
    return 0;
}
