#include <stdio.h>

int main() {
    int mainVar;
    printf("Enter a value for mainVar: ");
    scanf("%d", &mainVar);

    printf("mainVar in main block: %d\n", mainVar); // Accessible here [web:3]

    {
        int innerVar;
        printf("Enter a value for innerVar: ");
        scanf("%d", &innerVar);

        printf("mainVar inside inner block: %d\n", mainVar); // Accessible here [web:3]
        printf("innerVar inside inner block: %d\n", innerVar); // Accessible here [web:3]

        {
            int nestedVar;
            printf("Enter a value for nestedVar: ");
            scanf("%d", &nestedVar);

            printf("mainVar in nested block: %d\n", mainVar); // Accessible here [web:3]
            printf("innerVar in nested block: %d\n", innerVar); // Accessible here [web:3]
            printf("nestedVar in nested block: %d\n", nestedVar); // Accessible here [web:3]
        }

        // printf("nestedVar outside nested block: %d\n", nestedVar); // Compilation error: not accessible here [web:5]
    }

    // printf("innerVar outside inner block: %d\n", innerVar); // Compilation error: not accessible here [web:5]
    // printf("nestedVar outside nested block: %d\n", nestedVar); // Compilation error
    return 0;
}
