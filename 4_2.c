#include <stdio.h>

// Global variable declaration
float globalVar;

void setGlobalVar() {
    printf("Enter initial value for the global variable: ");
    scanf("%f", &globalVar);
}

void addValue(float val) {
    globalVar += val;
    printf("After adding %.2f, global variable: %.2f\n", val, globalVar);
}

void subtractValue(float val) {
    globalVar -= val;
    printf("After subtracting %.2f, global variable: %.2f\n", val, globalVar);
}

void multiplyValue(float val) {
    globalVar *= val;
    printf("After multiplying by %.2f, global variable: %.2f\n", val, globalVar);
}

void divideValue(float val) {
    if (val != 0) {
        globalVar /= val;
        printf("After dividing by %.2f, global variable: %.2f\n", val, globalVar);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    float num;

    setGlobalVar();

    printf("Enter a value to add: ");
    scanf("%f", &num);
    addValue(num);

    printf("Enter a value to subtract: ");
    scanf("%f", &num);
    subtractValue(num);

    printf("Enter a value to multiply: ");
    scanf("%f", &num);
    multiplyValue(num);

    printf("Enter a value to divide: ");
    scanf("%f", &num);
    divideValue(num);

    printf("Final value of global variable: %.2f\n", globalVar);

    return 0;
}
