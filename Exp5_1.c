/*. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to print the second largest integer in a list of integers. */
#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int arr[n];

    // Read the list of integers
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest and second largest elements
    int largest = arr[0];
    int second_largest = -2147483648;  // initialize to minimum int value

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Print the second largest element
    if (second_largest == -2147483648) {
        printf("No second largest element found\n");
    } else {
        printf("Second largest integer is: %d\n", second_largest);
    }

    return 0;
}

