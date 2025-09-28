/*Declare a global variable outside all functions and use it inside various functions to 
understand its accessibility.*/
#include <stdio.h>

// Declare a global variable
float globalVar;

void setGlobalVar() {
    printf("Enter a value for the global variable: ");
    scanf("%f", &globalVar);  // Taking input into the global variable
}

void addValue(float value) {
    globalVar += value;
    printf("After adding %.2f, global variable: %.2f\n", value, globalVar);
}

void multiplyValue(float value) {
    globalVar *= value;
    printf("After multiplying by %.2f, global variable: %.2f\n", value, globalVar);
}

void divideValue(float value) {
    if (value != 0) {
        globalVar /= value;
        printf("After dividing by %.2f, global variable: %.2f\n", value, globalVar);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void subtractValue(float value) {
    globalVar -= value;
    printf("After subtracting %.2f, global variable: %.2f\n", value, globalVar);
}

int main() {
    float num;

    setGlobalVar();  // Set initial value by user

    printf("Enter a value to add: ");
    scanf("%f", &num);
    addValue(num);

    printf("Enter a value to multiply: ");
    scanf("%f", &num);
    multiplyValue(num);

    printf("Enter a value to divide: ");
    scanf("%f", &num);
    divideValue(num);

    printf("Enter a value to subtract: ");
    scanf("%f", &num);
    subtractValue(num);

    printf("Final value of global variable: %.2f\n", globalVar);

    return 0;
}
