#include<stdio.h>
int findlowestsetbitposition(int a){
    if(a==0){
        return -1;
    }
    int position=1;
    while((a&1)==0){
        a>>=1;
        position++;
    }
    return position;
}
int main(){
    int a;
    printf("");
    scanf("%d %d",&a);
    int position=findlowestsetbitposition(a);
    return 0;
    }




