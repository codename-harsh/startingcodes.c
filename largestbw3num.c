#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c) printf("%d is largest !!",a);
    if(b>a && b>c) printf("%d is largest !!",b);
    if(c>a && b<c) printf("%d is largest !!",c);
    return 0;
}