// odd and even number find out function in c program...
#include <stdio.h>
void odd_even_func(int x){
    if(x % 2 == 0){
        printf("The value is %d even!", x);
    }
    else{
        printf("The value is %d odd!", x);
    }
}
int main(){
    odd_even_func(39);
return 0;
}
