#include <stdio.h>
int main(){
    char name[50];
    printf("enter your name: \n");
    scanf("%s", name);

    int i = 0, counter = 0;
    while(name[i] != '\0'){
        counter++;
        i++;
    }
    printf("Length of name is: %d \n", counter);
    printf("%s", name[i]);
return 0;
}
