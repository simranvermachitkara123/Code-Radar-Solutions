#include<stdio.h>
int main(){
    char str[200];
    int count=1;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
         // Count a word when the current char is not a space,
        // and (it's the first letter OR the previous char is a space)
        if((i==0 && str[i] != ' ' && str[i]!= '\n') || (str[i] != ' ' && str[i-1]==' ') ){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}