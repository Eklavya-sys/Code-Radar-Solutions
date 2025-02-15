#include<stdio.h>
int main(){
    int grade,description;
    printf("");
    scanf("%d %d",&grade,&description);
    if(grade==A){
        printf("Excellent");
    }
    else if(grade==B){
        printf("Good");
    }
    else if(grade==C){
        printf("Average");
    }
    else if(grade==D){
        printf("Below Average");
    }
    else if(grade==F){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
    }
}