// Number art in  C program...
#include <stdio.h>
int main(){
    int i, j;

    for(i = 5; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/* Will be output this program....
12345
1234
123
12
1
*/
