#include<stdio.h>
int main(){
    char str[100];
    int len =0;
    fgets(str,sizeof(str),stdin);
    while(str[len] != '\0' && str[i] !='\n'){
        len++;
    }
    printf("%d",len);
}