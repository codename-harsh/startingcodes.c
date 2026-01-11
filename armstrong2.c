// Armstrong Number baby //
#include<stdio.h>
#include<math.h>
int main(){
    int n,b,temp,r=0,c=0;
    printf("Enter the Number : \n");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
     temp/= 10;
         c++; // ofc we have to count the no of digits 
    }
    temp = n;
    while(temp!=0){
        b = temp % 10; //remainder it is //
        r = r + pow(b,c);
        temp/=10;
    }
    if(r==n) printf("It is Armstrong");
    else printf("Not armstrong ;/");
    return 0;
}