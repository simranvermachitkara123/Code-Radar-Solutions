#include <stdio.h>
int main(){
    int n,i,j;
    int c=65;
    scanf("%d",&n);
    for( i=n ; i>=1 ; i--){
        for( j=1 ; j<=i ; j++){
            printf("%c", (c+j));
        }
        return 0;
    }
}