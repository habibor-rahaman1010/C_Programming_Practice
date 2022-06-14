//input form user by scanf function using in C program...
#include <stdio.h>
int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name); //only single string accepted...
    printf("%s \n", name);
return 0;
}
