// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
    
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {  // Inner loop should run n times to create a square
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for( int i=1; i<=n; i++){
        for( int j=1; j<=n ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}