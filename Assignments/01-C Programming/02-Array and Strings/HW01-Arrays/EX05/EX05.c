#include <stdio.h>

#define MAX_SIZE 1000000 // Adjust the size as needed

int main() {
    int arr[MAX_SIZE];
    int n, search, i;

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Linear search for the element
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at location %d.\n", search, i+1);
            break;
        }
    }

    if (i == n) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}

