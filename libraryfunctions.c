#include<stdio.h>
#include<math.h>   
int fact(int x){
    register int a=1;
    for(int i=1;i<=x;i++){
        a = a*i; 
    }
    return a;
    }
    int strong(int p){
       register int sum=0;
        for(int i=p;i>0;i++){
            int d = i%10;
            sum = sum+fact(d);
        }
        return (sum == p);
    }
    int main()
    {
        int n;
        printf("Enter the num : ");
        scanf("%d",&n);
        if(strong(n)) printf("%d is a strong number ",n);
        else printf("%d is not a strong number",n);
    }

// int sum(int a, int b){
//     int s = a+b;
//     return s;
// }
// int main(){
//     int result = sum(109,5);
//     printf("The sum would be : %d",result);
// }

// int min(int a,int b){
//     if(a<b) return a;
//     else return b;
// }
// int main(){
//     int result = min(37,93);
//     printf("The minimum would be : %d",result);

// }
