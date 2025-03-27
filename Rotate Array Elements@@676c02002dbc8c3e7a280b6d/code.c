// #include<stdio.h>
// int main()
// {
//     int n,k;
//     scanf("%d",&n);
//     int arr[n],rotated[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&k);
//     k=k%n;
//     for(int i=0;i<n;i++){
//         int new= (k+i)%n;
//         rotated[new]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\n",rotated[i]);
//     }
// }






















#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;  // Handle cases where k > n

    for (int i = 0; i < k; i++) {  // Repeat K times
        int last = arr[n - 1];  // Store last element

        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];  // Move each element right
        }

        arr[0] = last;  // Place last element at first
    }
}

int main() {
    int n, k;
    scanf("%d", &n);  // Read size of array
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    scanf("%d", &k);  // Read K

    rotateRight(arr, n, k);  // Rotate array

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);  // Print rotated array
    }

    return 0;
}
