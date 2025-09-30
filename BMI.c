#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight and height from user
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Print BMI value
    printf("Your BMI is: %.2f\n", bmi);

    // Determine BMI category and print
    if (bmi < 18.5) {
        printf("BMI Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("BMI Category: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("BMI Category: Overweight\n");
    }
    else {
        printf("BMI Category: Obese\n");
    }

    return 0;
}
