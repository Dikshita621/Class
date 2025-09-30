/*WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to find the frequency of a particular number in a list of integers. */
#include <stdio.h>

int main() {
    int n, target, frequency = 0;

    // Read the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    // Read the list of integers
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number whose frequency is to be found
    printf("Enter the number to find frequency of: ");
    scanf("%d", &target);

    // Count the frequency of the target number
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            frequency++;
        }
    }

    printf("Frequency of %d is: %d\n", target, frequency);

    return 0;
}
