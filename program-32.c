//Do chacke Whether The number is divisible by 3 or 5 in C program..
#include <stdio.h>
int main(){
    int x;
    printf("Enter a value here: ");
    scanf("%d", &x);
    if(x % 3 == 0 || x % 5 == 0){
        printf("The number is divisible by 3 or 5");
    }
    else{
        printf("The number is not divisible by 3 or 5");
    }
    return 0;
}
