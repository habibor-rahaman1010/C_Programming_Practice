// The program find out ODD and EVEN number in C program..
#include <stdio.h>
int main(){
    int x;
    printf("Enter a integer value here: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("The number is a integer!");
    }
    else{
        printf("The number is not a integer!");
    }
    return 0;
}
