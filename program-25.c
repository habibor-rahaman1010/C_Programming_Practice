#include <stdio.h>
int main(){
    int a, b, c;
    printf("value assign of a, b, c: \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("value of a: %d \n", a);
    printf("value of b: %d \n", b);
    printf("value of c: %d \n", c);
    float average = (a + b + c)/3.0;
    printf("average of a, b, and c: %.2f", average);
    return 0;
}
