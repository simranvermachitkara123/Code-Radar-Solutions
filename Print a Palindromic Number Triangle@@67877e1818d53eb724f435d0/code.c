#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=(n-i);k++){
            printf(" ");

        }
        for(j=1;j<=i;j++)(
            printf("%d",j);
        )
        for(j=i-1;j>=1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}