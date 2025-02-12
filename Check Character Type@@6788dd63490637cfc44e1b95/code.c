#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(isalpha(c)){
        if( c=="A" || c=="a" || c=="e" || c=="E" || c=="i" || c=="I" || c=="o" || c=="O" || c=="U" || c=="u"){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }


    }
    else if (isdigit(c)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}