#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n/2);i++){
        if(arr[i]!=arr[n-i-1]){
            printf("NO");
            return 0;
        }
        
    }
    printf("YES");
    
        

}