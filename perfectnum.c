#include<stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d %d",&a,&b);
        int sum;
    for(i=a;i<=b;i++){
        sum = 0;
        for(j=1;j<=i/2;j++){
        if(i%j==0) sum=sum+j;
        }
    if(sum==i && i!=0) 
    printf("perfect num %d",sum);
}
}