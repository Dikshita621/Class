#include<stdio.h>

int main()
{
    int a; // variable in main block

    printf("Enter a value for a: ");
    scanf("%d", &a);

    // Block 1: Using user input
    {
        int b = a + 10;
        printf("Block 1 - a: %d, b: %d\n", a, b);
    }
    // printf("Outside Block 1 - b: %d\n", b); // Error: b not accessible here

    // Block 2: Using another input
    {
        int c;
        printf("Enter value for c (B 2): ");
        scanf("%d", &c);
        printf("Block 2 - a: %d, c= %d\n", a, c);
    }
    // printf("Outside Block 2 - c: %d\n", c); // Error: c not accessible here

    printf("Outside all blocks - a: %d\n", a);

    return 0;
}
