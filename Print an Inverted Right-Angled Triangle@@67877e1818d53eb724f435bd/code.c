#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for( int i=n;i<=n;i++){
        for( int j=n;j>1;j++){
            printf("* ");
        }
    }
    printf("\n");

    
    return 0;
}