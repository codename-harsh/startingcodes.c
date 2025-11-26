#include <stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
float divide(int a,int b){ return (float)a/b; }

int main() {
    int a, b, ch;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1: printf("Result = %d\n", add(a,b)); break;
        case 2: printf("Result = %d\n", sub(a,b)); break;
        case 3: printf("Result = %d\n", mul(a,b)); break;
        case 4: 
            if(b == 0) 
                printf("Error: divide by zero\n");
            else 
                printf("Result = %.2f\n", divide(a,b)); 
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
