#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("");
    scanf("%d %d %c",&a,&b,&operator);
    if(operato=='+'){
        printf("%d+%d=%d",a,b,a+b);
    }
    else if(operator=='-'){
        printf("%d-%d=%d",a,b,a-b);
    }
    else if(operator=='*'){
        printf("%d*%d=%d",a,b,a*b);
    }
    else if(operator=='/'){
        if(b!=0){
            printf("%d/%d=%d",a,b,a/b);
        else{
            printf("Error");
        }
        }
    }
    else{
        printf("Error");
    }
    return 0;
        }

