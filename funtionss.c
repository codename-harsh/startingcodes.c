#include<stdio.h>
void t(){
    int rev =0;
    printf("the value here u will get %d \n",rev);
}
int p(int c){
    return c*838;
}
int main(){
    t();
    int result = p(5);
    printf("The ans would be : %d",result);
}
