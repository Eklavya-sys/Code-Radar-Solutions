#include<stdio.h>
int main(){
    char name[50];
    char favouritehobby[50];
    int age; 
    printf("");
    scanf("%s %d %s",name,&age,favouritehobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",favouritehobby);
    return 0;

}