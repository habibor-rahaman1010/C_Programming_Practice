//find out an big number form an array...form user by input
#include <stdio.h>
int main(){
    int x[5];
    int i;

    printf("Enter your input: ");
    for(i = 0; i < 5; i+=1){
        scanf("%d", &x[i]);
    }

    int max_value = x[0];
    for(i = 1; i < 5; i+=1){
        if(x[i] > max_value)
            max_value = x[i];
    }
    printf("Max value of array: %d", max_value);
    return 0;
}


