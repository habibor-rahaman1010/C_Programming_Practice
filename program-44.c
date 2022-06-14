#include <stdio.h>
int main(){
    int x;
    x = 10;
    x+=1;
    x*=2;
    x-=2;
    x/=2;
    x%=2;
    ++x;
    x = x + 9;
    printf("Value of x: %d", x);
    return 0;
}
