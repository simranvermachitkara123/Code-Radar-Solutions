#include <stdio.h>
int main() {

    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(sp<cp){
        printf("Loss");
    }
    else(cp==sp){
        printf("No Profit No Loss");
    }
    return 0;
}