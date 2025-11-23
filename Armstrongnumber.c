#include <stdio.h>
int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    } 
    originalNum = num;

    // Compute the sum of nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;

        // Manual power calculation
        int power = 1;
        for (int i = 0; i < n; ++i) {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
