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
            sec = largest;
            largest=arr[i];
        }
    
    
        else if(arr[i]>sec && ( arr[i]<largest)){
            sec=arr[i];
        }
    }
    printf("%d",sec);
}
// #include<stdio.h>

// int main(){
//     int n, i;
//     scanf("%d", &n);
//     int arr[n];

//     for(i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }

//     int largest = arr[0];
//     int sec = -1;

//     for(i = 1; i < n; i++){  // Start from 1 (first element is already largest)
//         if(arr[i] > largest){
//             sec = largest;  // Update second largest before changing largest
//             largest = arr[i];
//         }
//         else if(arr[i] > sec && arr[i] < largest){
//             sec = arr[i];  // Update second largest if it's smaller than largest
//         }
//     }

//     printf("%d\n", sec);  // If no second largest, it prints -1

//     return 0;
// }
