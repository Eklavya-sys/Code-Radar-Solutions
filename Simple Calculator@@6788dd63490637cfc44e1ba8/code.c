#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("");
    scanf("%d %d %c",&a,&b,&operator);
    if(operator=='+'){
        printf("%d",a+b);
    }
    else if(operator=='-'){
        printf("%d",a-b);
    }
    else if(operator=='*'){
        printf("%d",a*b);
    }
    else if(operator=='/'){
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");
        }
        }
        
    
    else{
        printf("Error");
    }
        return 0;
    }
    
        

