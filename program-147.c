//find out null character in C program..
#include <stdio.h>
int main(){
    char str[] = "Hello";
    int i = 0;
    while(1){
        printf("%d - %c \n", i, str[i]);
        if(str[i] == '\0'){
            break;
        }
        i+=1;
    }

return 0;
}
