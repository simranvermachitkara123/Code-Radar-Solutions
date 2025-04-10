#include<stdio.h>
#include<string.h>
int main(){
char str[200],str2[200];
fgets(str,sizeof(str),stdin);
fgets(str2,sizeof(str2),stdin);
// Remove newline characters if present
str[strcspn(str,"\n")]='\0';
str2[strcspn(str2,"\n")]='\0';
strcat(str,str2);
printf("%s",str);
}