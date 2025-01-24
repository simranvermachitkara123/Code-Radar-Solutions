#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if ((num & -num )){
        prinf("Set");
    }
    else{
        printf("Not Set");
    }
    
    return 0;
}