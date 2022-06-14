// Number art in  C program...
#include <stdio.h>
int main(){
    int i, j;

    for(i = 1; i <= 5; i++){
        for(j = i; j <= 5; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/* Will be output this program....
12345
2345
345
45
5
*/
