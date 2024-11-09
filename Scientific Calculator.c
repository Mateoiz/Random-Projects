#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("Scientific Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Sine\n");
    printf("6. Cosine\n");
    printf("7. Tangent\n");
    printf("8. Logarithm\n");
    printf("9. Exponential\n");
    printf("10. Power\n");
    printf("11. Square Root\n");
    printf("0. Exit\n");
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case 5:
                printf("Enter an angle in radians: ");
                scanf("%lf", &num1);
                result = sin(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter an angle in radians: ");
                scanf("%lf", &num1);
                result = cos(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 7:
                printf("Enter an angle in radians: ");
                scanf("%lf", &num1);
                result = tan(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 8:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    result = log(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Logarithm of non-positive number\n");
                }
                break;
            case 9:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = exp(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 10:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 11:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Square root of negative number\n");
                }
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}