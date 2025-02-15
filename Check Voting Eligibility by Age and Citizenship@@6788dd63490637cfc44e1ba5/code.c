#include<stdio.h>
int main(){
    int age,citizenstatus;
    printf("");
    scanf("%d",&a);
    if(age>=18&&citizenstatus==1){
        printf("Eligible");
    }
    else if(age>=18&&citizenstatus==0){
        printf("Not Eligible");
    }
    else if(age<18&&citizenstatus==1){
        printf("Not Eligible");
    }
    else if(age<18&&citizenstatus==0){
        printf("Not Eligible");
    }
    return 0;
}