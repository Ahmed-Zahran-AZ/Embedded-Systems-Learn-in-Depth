#include <stdio.h>

// Function to calculate power using recursion
long long power(int base, int exp) {
    if (exp == 0) // Base case: any number raised to the power of 0 is 1
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1); // Recursive case for positive exponent
    else
        return 1 / power(base, -exp); // Handle negative exponents
}

int main() {
    int base, exp;

    // Input base and exponent from the user
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    // Calculate and display the result
    long long result = power(base, exp);
    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}

