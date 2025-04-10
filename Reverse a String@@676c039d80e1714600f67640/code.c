#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int length = strlen(str);
    for(int k=length-1;k>=0;k--){
        printf("%c",str[k]);
    }
}