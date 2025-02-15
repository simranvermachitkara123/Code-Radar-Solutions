// #include <stdio.h>
// int main() {
//     char ch;
//     scanf("%c",&ch);
//     if ((ch>='A') && (ch<='Z')){
//         printf("Uppercase");
//     }
//     else if( (ch>='a') && (ch<='z')){
//         printf("Lowercase");
//     }
//     else{
//         printf("Not an alphabet");
//     }
    
//     return 0;
// }
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if((c>='A') && (c<='Z')){
        printf("Uppercase");
    }
    else if((c>='a') && (c<='z')){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}