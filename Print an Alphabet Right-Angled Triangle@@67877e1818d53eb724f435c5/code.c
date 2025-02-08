#include <stdio.h>
int main(){
    int n,i,j;
    int ch=64;
    scanf("%d",&n);
    for (i = 1 ; i<=n ; i++){
        for( j=1 ; j<=i ; j++){
            printf("%c ",(ch+j));
        }
        printf("\n");
    }
    return 0;
}