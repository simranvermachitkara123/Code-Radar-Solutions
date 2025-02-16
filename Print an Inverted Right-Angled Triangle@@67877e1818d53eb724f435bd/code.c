// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for( int i=1;i<=n;i++){
//         for( int j=n;j>=i;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
   

    
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n,i,j;
//     scanf("%d",&n);
//     for( i=n ; i>=1 ; i--){
//         for( j=1 ; j<=i ; j++ ){
//             printf("* ");
//         }
//         printf("\n");

//     }
// }



#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n,i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
