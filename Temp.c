#include <stdio.h>
int main()
{
    float Celsius , Fahrenheit;

    printf("Enter the temp in Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9/5) + 32;


    printf("The temp is in C: %.2f\n", Celsius);
    printf("The temp is in F: %.2f\n", Fahrenheit);
    return 0;
}
