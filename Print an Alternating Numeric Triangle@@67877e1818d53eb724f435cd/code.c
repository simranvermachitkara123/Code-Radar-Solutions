#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int num=i%2;
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num=!num;
        }
        printf("\n");
    }
}