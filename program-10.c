#include <stdio.h>
int main(){
    int x, y, z, result;
    x = 100, y = 3, z = 2;
    result = x % y % z;
    printf("The result is: %d\n", result);
    return 0;
}
