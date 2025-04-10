#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len;
    int ispallin=1;
    scanf("%s",str);
    len= strlen(str);
    for(int i=0;i<len/2;i++){
        is(str[i]!=str[len -1-i]){
            ispallin =0;
            break;
        }
    }
    if(ispallin){
        printf("Yes");
    }
    else{
        printf("No");
    }

}
