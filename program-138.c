//write a function in c program....
#include <stdio.h>
int main(){
    void say_hi(){
        printf("Hello Developer! \n");
    }
    say_hi();

    int my_func(int x, int y){
        int sum = x + y;
        return sum;
    }
    int result = my_func(23, 45);
    printf("My sum is = %d", result);
return 0;
}
