#include<stdio.h>
#include<math.h>
int fac(int n){
    int f=1;
    for(int i=1;i<=n;i++){
    f*=i;
    }
    return f;
}
int ncr(int n, int r){
    return fac(n)/(fac(r)*fac(n-r));
}
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i-1;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            int x = ncr(i,j);
            printf("%d ",x);
        }
        printf("\n");
    }
}