#include<stdio.h>
#include<string.h>
int main(){
    char grade[50];
    char description[60];
    printf("");
    scanf("%s %s",&grade,&description);
    if(strcmp(grade,"A")==0){
        printf("Excellent");
    }
    else if(strcmp(grade,"B")==0){
        printf("Good");
    }
    else if(strcmp(grade,"C")==0){
        printf("Average");
    }
    else if(strcmp(grade,"D")==0){
        printf("Below Average");
    }
    else if(strcmp(grade,"F")==0){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
    }
