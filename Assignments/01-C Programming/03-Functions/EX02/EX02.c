#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n) {
    if (n <= 1) // Base case: 0! = 1! = 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %llu\n", num, factorial(num));

    return 0;

}
