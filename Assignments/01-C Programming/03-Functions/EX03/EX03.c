#include <stdio.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end) // Base case: when start index is greater or equal to end index
        return;

    // Swap the characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call to reverse the remaining string
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Call the reverse function
    reverseString(str, 0, length - 1);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

