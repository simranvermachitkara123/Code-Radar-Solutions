// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for( int i=1; i<=n; i++){
//         for( int j=1; j<=n ; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n ; i++){
        for( j=1 ; j<=n ; j++ ){
            printf("* ");
        }
        printf("\n");
    }
}