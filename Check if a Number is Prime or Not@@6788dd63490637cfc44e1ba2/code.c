#include<stdio.h>
#include<math.h>
int main(){
    int a,i;
    int isprime=1;
    printf("");
    scanf("%d",&a);
    if(a<=1){
       isprime=0;
    }
    else if(a==2){
        isprime=1;
    }
    else if(a%2==0){
        isprime=0;
    }
    else{
        for(i=3; i<=sqrt(a); i+=2){
            if(a%i==0){
                isprime==0;
                break;
            }

        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}

