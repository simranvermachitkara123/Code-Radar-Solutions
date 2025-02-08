// #include <stdio.h>
// int main(){
//     int n,i,j,k;
//     scanf("%d",&n);
//     for(i=i ; i<=n ; i++){
//         for(k=1 ; k<=(n-i); k++){
//             printf(" ");
//         }
//         for( j=1 ; j<=i ; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {  
        // Print spaces before the numbers
        for(k = 1; k <= (n - i); k++) {
            printf(" ");
        }

        // Print numbers in the pyramid
        for(j = 1; j <= i; j++) {
            // Print each number and check if it's not the last number of the row
            if (j == i) {
                printf("%d", j); // No trailing space for the last number
            } else {
                printf("%d ", j); // Print space for all except the last number
            }
        }

        printf("\n");
    }
    
    return 0;
}
