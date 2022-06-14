//switch case in if else in C program...
#include <stdio.h>
int main(){
    int x;
    printf("Enter your case here: ");
    scanf("%d", &x);

    switch(x){
    case 1:
        if(x == 1 && x != 2){
            printf("This is case 1 \n");
        }
        else{
            printf("You are legend in C program! \n");
        }
        printf("hello programmer!");
        break;


    case 2:
        if(x == 2 && x > 5){
            printf("This is case 2 \n");
        }
        else{
            printf("You are very legend in C program! \n");
        }
        printf("hello programmer!");
        break;


    case 5 + 3:  // 5 + x not allowed this expression and float number not allowed..
        if(x != 8 || x == 8){
            printf("This is case 8 \n");
        }
        else{
            printf("You are ultra legend in C program! \n");
        }
        printf("hello programmer!");
        break;

    default:
        printf("Unknown this is case");
    }
    return 0;
}



