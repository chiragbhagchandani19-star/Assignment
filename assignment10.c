#include <stdio.h>

int main() {
    int choice;
    int i, x, y;
    float a, b, result;
    int fact = 1;
    float power = 1;

    printf("Simple Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            break;

        case 5:
            printf("Enter x and y: ");
            scanf("%d %d", &x, &y);
            power = 1;
            for (i = 1; i <= y; i++) {
                power = power * x;
            }
            printf("Result = %.2f\n", power);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &x);
            fact = 1;
            for (i = 1; i <= x; i++) {
                fact = fact * i;
            }
            printf("Result = %d\n", fact);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}