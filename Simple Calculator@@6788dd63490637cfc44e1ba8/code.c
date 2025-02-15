#include<stdio.h>
int main(){
    int a,b;
    char operato;
    printf("");
    scanf("%d %d %c",&a,&b,&operato);
    if(operato=='+'){
        printf("%d+%d=%d",a,b,a+b);
    }
    else if(operato=='-'){
        printf("%d-%d=%d",a,b,a-b);
    }
    else if(operato=='*'){
        printf("%d*%d=%d",a,b,a*b);
    }
    else if(operato=='/'){
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

