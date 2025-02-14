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
    scanf("%d",&a);
    int position=findlowestsetbitposition(a);
    if(position==-1){
        printf("No set bit found\n");
    }
    else{
        printf("Position of lowest set bit is:%d\n",position);
    }
    return 0;
    }




