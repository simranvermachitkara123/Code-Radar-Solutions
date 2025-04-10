#include<stdio.h>
#include<string.h>
int main(){
char str[200],str2[200];
fgets(str,sizeof(str),stdin);
fgets(str2,sizeof(str2),stdin);
out=strcat(str,str2);
printf("%s",out);
}