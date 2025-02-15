#include<stdio.h>
int main(){
    int age,citizenstatus;
    printf("");
    scanf("%d %d",&age,&citizenstatus);
    if(age>=18){
        if(citizenstatus==1){
            printf("Eligible");
        }
    }
        else if{
            if(age>=18){
                if(citizenstatus==0){
                    printf("Not Eligible");
                }
            }
        }
        else if{
            if(age<18){
                if(citizenstatus==1){
                    printf("Not Eligible");
                }
            }
        }
        else{
            if(age<18){
                if(citizenstatus==0){
                    printf("Not Eligible");
                }
            }
        }
        return 0;
}

