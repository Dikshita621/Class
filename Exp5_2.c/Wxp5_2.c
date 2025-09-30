/* WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to count and display positive, negative, odd, and even numbers in an array. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive_count = 0;
    int negative_count = 0;
    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Odd numbers: %d\n", odd_count);
    printf("Even numbers: %d\n", even_count);

    return 0;
}
