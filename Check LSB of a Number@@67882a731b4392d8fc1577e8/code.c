#include <stdio.h>
int main() { 
    int a,lsb;
    scanf("%d",&a);
    int lsb = a & 1;
    printf("%d",lsb);
   
    return 0;
}