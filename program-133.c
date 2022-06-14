//find out to array max number in C programming language...
#include <stdio.h>
int main(){
    int x[10] = {-99, 45, 100, 37, 89, -327, 245, 201, 417, 473};
    int max_value = x[0];
    int i;
    for(i = 1; i < 10; i++){
        if(x[i] > max_value)
            max_value = x[i];
    }
    printf("Max Value is: %d \n", max_value);
    return 0;
}
