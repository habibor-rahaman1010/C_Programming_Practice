#include <stdio.h>
int main(){
    int y, z, sum;
    int x[2][3] = {23, 34, 50,
                   44, 45, 99};
    printf("%d \n", x[0][0]);
    printf("%d \n", x[0][1]);
    printf("%d \n", x[1][1]);
    printf("%d \n", x[1][0]);

    y = x[0][0];
    z = x[1][0];
    sum = y + z;
    if(sum%2 == 0){
        printf("y and z summation is %d even number!", sum);
    }
    else{
        printf("y and z summation is %d odd number!", sum);
    }

    return 0;
}
