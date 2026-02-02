#include<stdio.h>
int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int nCr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}
int main(){
    int n; puts("Enter the number of rows :");
    scanf("%d",&n);
    for(int i = 1; i <=n; i++){
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= i; j++) // kinda most important shit jo ki exam me yaad nahi aati sed life lol //
            printf("%d ", nCr(i-1, j-1));
        printf("\n");
    }
    return 0;
}