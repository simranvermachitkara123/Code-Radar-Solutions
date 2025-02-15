// #include <stdio.h>
// int main() {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if ((a+b>c) && (a+c>b) && (b+c>a)){
//         printf("Valid");
//     }
//     else{
//         printf("Invalid");
//     }
   
//     return 0;
// }


#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    ((a+b>c) && (b+c>a) && (c+a>b))?printf("Valid"):printf("Invalid");
    return 0;
}