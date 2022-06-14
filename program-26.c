// if else condition in C program
#include <stdio.h>
int main(){
    int x = 10;
    int z = 10;
    if(x+=1 > z){ //(x > x++),(x >= x),(x+1 > x),(x+=1 > x) there are same and boolean result is True! (x++ > x),(x > x + 1),(x > x)boolean result is False!
        printf("Hello world!");
    }
    else{
        printf("Hello Programmer!");
    }
    return 0;
}
