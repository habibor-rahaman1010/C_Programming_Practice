//find out divisors value in c program....
#include <stdio.h>
void print_divisors(int x){
    int i;
    for(i = 1; i <= x; i += 1){
        if(x % i == 0){
            printf("%d \n", i);
        }
    }
}
int main(){
    print_divisors(20);
return 0;
}
