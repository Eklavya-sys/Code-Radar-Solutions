#include<stdio.h>
int main(){
    char a;
    printf("");
    scanf("%c",&a);
    if(a>='A'&&a<='Z'){
        printf("Uppercase");
    }
    else if(a>='a'&&a<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    }
