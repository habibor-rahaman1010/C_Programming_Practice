#include <stdio.h>
int main(){
    char x;
    printf("Enter a character here: ");
    scanf("%c", &x);

    if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'
       || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
        printf("This is vowel character!");
    }
    else{
        printf("This is consonant character!");
    }
    return 0;
}
