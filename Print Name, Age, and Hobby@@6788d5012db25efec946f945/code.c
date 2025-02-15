// #include <stdio.h>
// int main() {
//     char name[100];
//     int age;
//     char hobby[100];
//     scanf("%s %d %s",name,&age,hobby );
//     // getchar();
//     // fgets(hobby, sizeof(hobby) ,stdin);
//     printf("Name: %s\n",name);
//     printf("Age: %d\n",age);
//     printf("Hobby: %s\n",hobby);
//     return 0;
// }

#include<stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%s %d %s",name,&age,hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s", hobby);
    return 0;



}