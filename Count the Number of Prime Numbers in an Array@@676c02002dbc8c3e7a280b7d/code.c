// #include<stdio.h>
// int main(){
//     int n,i,count,primecount=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         if(arr[i]<2){
//             continue;
//         }
//         count=0;
//         for(int j=1;j<=arr[i];j++){
//             if(arr[i]%j == 0){
//                 count++;
//             }
            
            
//         }
//         if(count==2){
//                 primecount++;
//             }
//         }
//         printf("%d",primecount);
      
//     }


#include<stdio.h>
int main(){
    int n,i,j,count,primecount;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<2){
            continue;
        }
        count=0;
        for(j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==2){
            primecount++;
        }
    }
    printf("%d",primecount);
}