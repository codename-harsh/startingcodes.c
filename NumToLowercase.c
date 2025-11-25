#include<stdio.h>
int main(){
    unsigned int n;
    scanf("%u",&n);
    if(n>=1 && n<=9){
        if(n==1) printf("one");
        if(n==2) printf("two");
        if(n==3) printf("three");
        if(n==4) printf("four");
        if(n==5) printf("five");
        if(n==6) printf("six");
        if(n==7) printf("seven");
        if(n==8) printf("eight");
        if(n==9) printf("nine");
    }
    else printf("Greater than 9");
}