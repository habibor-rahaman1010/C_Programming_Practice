#include <stdio.h>
int main(){
    int x[6];
    int i;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the value array: ");
    for(i = 0; i < 6; i+=1){
        scanf("%d", &x[i]);
    }

    printf("Values of array: ");
    for(i = 0; i < 6; i++){
        printf("%d ", x[i]);

        if(x[i] % 2 == 0)
            even_sum = even_sum + x[i];

        else
            odd_sum = odd_sum + x[i];

    }
    printf("\nSum of even value: %d \n", even_sum);
    printf("Sum of odd value: %d \n", odd_sum);

    return 0;
}





