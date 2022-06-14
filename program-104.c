#include <stdio.h>
int main(){
    int i, j;
    i = 1;
    while(i <= 10){
       j = i;
       while(j <= 10){
            printf("*");
            j+=1;
       }
       printf("\n");
       i+=1;
    }
    return 0;
}
