#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("");
    scanf("%d %d %c",&a,&b,&operator);
    if(operator=="+"){
        printf("%d+%d=%d",a,b,a+b);
    }
    else if(operator=="-"){
        printf("%d-%d=%d",a,b,a-b);
    }
    else if(operator=="*"){
        printf("%d*%d=%d",a,b,a*b);
    }
    else if(operator=="/"){
        printf("%d/%d=%d",a,b,a/b);
        }
        }
    
    else{
        printf("Error");
        return 0;
    }
        

