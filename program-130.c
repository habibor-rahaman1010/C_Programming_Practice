//find out an array which value is biggest....
#include <stdio.h>
int main(){
    int x[10] = {134, 56, 67, 45, 84, 45, 355, 96, 444, 545};
    int i;
    int max_value = x[0];

    for(i = 1; i < 10; i+=1){
        if(x[i] > max_value)
            max_value = x[i];
    }
    printf("Max value of array: %d", max_value);
    return 0;
}
