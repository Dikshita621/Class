#include <stdio.h>

int g = 20; 

void add(int x) {
    g = g + x; 
    printf("After addition, g = %d\n", g);
}

void subtract(int x) {
    g = g - x; 
    printf("After subtraction, g = %d\n", g);
}

void multiply(int x) {
    g = g * x; 
    printf("After multiplication, g = %d\n", g);
}
void divide(int x) {
    if (x != 0) {
        g = g / x; 
        printf("After division, g = %d\n", g);
    } else {
        printf("Cannot divide by 0\n");
    }
}

int main() {
    printf("Initial value of g = %d\n", g);
    add(10);        
    subtract(5);    
    multiply(4);    
    divide(5);      
    return 0;
}
