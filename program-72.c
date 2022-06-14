// 100 to 1 print in c program using while loop...
#include <stdio.h>
int main(){
    int j;
    j = 100;

    while(j >= 1){
        printf("Value of j: %d \n", j);
        j -= 1;   // j -= 1;  j--;  j = j - 1; there are same concepts
    }
    return 0;
}
