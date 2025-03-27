#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest= arr[0];
    int sec = -1;
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]>sec && arr[i]<largest){
            sec=arr[i];
        }
    }
    printf("%d",sec);
}