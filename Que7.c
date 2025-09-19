#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for triangle validity using the triangle inequality theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid.\n");
        
        // Check if triangle is equilateral
        if (a == b && b == c) {
            printf("Triangle is equilateral.\n");
        }
        // Check if triangle is isosceles
        else if (a == b || a == c || b == c) {
            printf("Triangle is isosceles.\n");
        }
        // Otherwise, it is scalene
        else {
            printf("Triangle is scalene.\n");
        }
        
        // Check if triangle is right-angled
        // According to Pythagoras' theorem: a^2 + b^2 = c^2 etc.
        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a)) {
            printf("Triangle is right-angled.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }
    return 0;
}
