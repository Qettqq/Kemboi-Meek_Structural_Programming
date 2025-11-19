#include <stdio.h>

int main() {
    int num1, num2;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;


    float division = (float)num1 / num2;
    int modulus = num1 % num2;  // still works fine

    //  Display results
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %.4f\n", division);
    printf("Modulus: %d\n", modulus);

    return 0;
}

