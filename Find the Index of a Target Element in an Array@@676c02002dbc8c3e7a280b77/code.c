#include<stdio.h>
int main(){
    int n,i,key,found;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("%d",i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
}