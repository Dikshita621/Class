#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int area;
    
    // Take input for three points
    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter x3, y3: ");
    scanf("%d %d", &x3, &y3);
    
    // Calculate the area of triangle formed by the three points 
    area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    
    // Check if area is zero
    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }
    
    return 0;
}
