#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n],rotated[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k=k%n;
    for(int i=0;i<n;i++){
        int new= (k+i)%n;
        rotated[new]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",rotated[i]);
    }
}