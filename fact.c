#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    // 1. Take user input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // 2. Validate input using an if-else statement
    if (number < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        // 3. Calculate factorial using a for loop
        for (int i = 1; i <= number; ++i) {
            factorial *= i; // Same as: factorial = factorial * i;
        }

        // 4. Output the result
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
