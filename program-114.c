// -100 to -1 odd number find out in c program using continue....
#include <stdio.h>
#include <stdlib.h>
int main(){
    system("COLOR F0");
    int i;
    for(i = -100; i <= -1; i+=1){
        if(i % 2 == 0)
            continue;
        printf("%d \n", i);
    }

    return 0;
}
