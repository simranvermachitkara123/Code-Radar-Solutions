#include<stdio.h>
int main(){
    int n,i,j,count,maxfreq=0,maxelement=0;
    scanf("%d",&n);
    int arr[n];visited[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for(i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
        count=1;
        for(j=i+i;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxelement=arr[i];
        }
        elseif(maxfreq=count && arr[i]<maxelement){
            maxelement=arr[i];
        }
    }
    printf("%d",maxelement);
}