#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;//track if majorty element is found
    // check each element count
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > n/2){
            printf("%d",arr[i]);
            found=1;
            break;//this is must if we want our answer not to repeat
        }
        
        
    }
    if(found==0){
            printf("-1");
        }
    
    
}