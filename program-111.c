//-1 to -100  even number find out in c program using continue....
#include <stdio.h>
int main(){
    int i;
    for(i = -1; i >= -100; i-=1){
        if(i % 2 != 0)
            continue;
        printf("%d \n", i);
    }

    return 0;
}
