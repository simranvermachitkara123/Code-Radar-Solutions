#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>2){
            continue;
        }
        count=0;
        for(int j=1;j<arr[i];j++){
            if(arr[j]%2 == 0){
                count++;
            }
        }
        if(count==2){
            printf("%d\n");
        }
    }
}