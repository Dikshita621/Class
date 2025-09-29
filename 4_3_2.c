#include <stdio.h>

int main() {
    int a;
    printf("Enter a value for a: ");
    scanf("%d", &a);
    printf("Value of a: %d\n", a); // Accessible here [web:19]

    {
        int b;
        printf("Enter a value for b: ");
        scanf("%d", &b);
        b = b + a; // addition [web:19]
        b = b - 2; // subtraction [web:19]
        ++b;       // increment [web:24]
        --b;       // decrement [web:24]
        printf("Modified b in inner block: %d\n", b); // Accessible here [web:19]
    }

    // Uncommenting the next line causes error because 'b' is not accessible outside its block
    // printf("Trying to access b outside block: %d\n", b);

    return 0;
}
