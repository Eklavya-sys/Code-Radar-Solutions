#include<stdio.h>
int main(){
    char a;
    printf("");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
           printf("Vowel");
}
    else if(isalpha(a)){
        printf("Consonant");
    }
    else if(a>='0'&&a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}