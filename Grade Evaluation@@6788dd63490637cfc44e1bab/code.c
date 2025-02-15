// #include <stdio.h>
// int main() {
//     char a;
//     scanf("%c",&a);
//     if(a=='A'){
//         printf("Excellent");
//     }
//     else if(a=='B'){
//         printf("Good");
//     }
//     else if(a=='C'){
//         printf("Average");
//     }
//     else if(a=='D'){
//         printf("Below Average");
//     }
//     else if(a=='F'){
//         printf("Fail");
//     }
//     else{
//         printf("Invalid grade");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");

    }
    return 0;
}