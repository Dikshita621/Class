#include <stdio.h>

int g = 5;  // Global variable

int add(int n);

int main()
{
    int x, res;
    printf("Enter a number: ");
    scanf("%d", &x);

    res = add(x);

    // printf("%d", t);  // Error: 't' is local to add() and not accessible here

    printf("Global var from main: %d\n", g);
    printf("Result of addition: %d\n", res);

    return 0;
}

int add(int n)
{
    int t = n + 5;  // Local variable 't'
    printf("Access global var from function: %d\n", g);
    return t;
}
