#include <stdio.h>
int main(){
    int a[5], b[5], ab[5];
    int i;

    printf("Value of a array: \n");
    for(i = 0; i < 5; i+=1){
        scanf("%d", &a[i]);
    }

    printf("Value of a array: \n");
    for(i = 0; i < 5; i+=1){
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 5; i+=1){
        ab[i] =  a[i] + b[i];
    }

    printf("Value of ab array: \n");
    for(i = 0; i < 5; i+=1){
       printf("%d ", ab[i]);
    }

return 0;
}
