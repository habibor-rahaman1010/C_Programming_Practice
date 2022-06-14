/* write a program which will take an integer N form user
and print all the numbers between N to -32, stop your programmer when use will give N=-1 as input */

#include <stdio.h>
int main(){
    int n , j;
    while(1){
        printf("Enter your input[input 0 to stop program!]:");
        scanf("%d", &n);
        if(n == 0){
            printf("Program is terminate! \n");
            break;
        }
        if(n > -32){
            for(j = n; j >= -32; j-=1){
                printf("%d \n", j);
            }
        }
        else{
            for(j = n; j <= -32; j+=1){
                printf("%d \n", j);
            }
        }
    }
    return 0;
}

