/*Declare a static local variable inside a function. Observe how its value persists 
across function calls. */
#include <stdio.h>

void demoStatic() {
    static int count = 0;  // static local variable initialized once
    count++;
    printf("Value of count: %d\n", count);
}

int main() {
    demoStatic();  // Output: Value of count: 1
    demoStatic();  // Output: Value of count: 2
    demoStatic();  // Output: Value of count: 3
    return 0;
}
