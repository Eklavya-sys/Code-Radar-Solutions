#include<stdio.h>
int main(){
    int age,citizenstatus;
    printf("");
    scanf("%d %d",&age,&citizenstatus);
    if(age>=18&&citizenstatus==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}