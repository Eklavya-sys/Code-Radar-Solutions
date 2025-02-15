#include<stdio.h>
int main(){
    int a;
    if(scanf(%d,&a)!=0){
        return 1;
    }
    if(a%3==0&&a%5==0){
        printf("Divisible by Both");
    }
    else if(a%3==0){
        printf("Divisible by 3");
    }
    else if(a%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}






























































































































































































    }
}