#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b,t,c=0;
    printf("Enter a  num ");
    scanf("%d",&n);
    a=n;
    while(a!=0){
        c++;
        a/=10;
    }
    t=0;
    while(n!=0){
        b=n%10;
        t = t + pow(t,c);
    n/=10;
}
    if(t==n)printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}