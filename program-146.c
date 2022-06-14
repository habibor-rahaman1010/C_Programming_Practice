//input form user by gets function using in C program...
#include <stdio.h>
int main(){
    char name[20];
    printf("Enter your name: ");
    gets(name); // multi string accepted in gets in scanf
    printf("%s \n", name);
return 0;
}
