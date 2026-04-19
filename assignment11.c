#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

long long factorial(int n) {
    if (n < 0) return -1; // invalid
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void primeFactors(int n) {
    if (n <= 1) {
        printf("No prime factors for %d\n", n);
        return;
    }

    printf("Prime factors: ");
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}

int main() {
    int num, choice;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("\n----- MENU -----\n");
    printf("1. Square root of the number\n");
    printf("2. Square of the number\n");
    printf("3. Cube of the number\n");
    printf("4. Check whether the number is prime\n");
    printf("5. Factorial of the number\n");
    printf("6. Prime factors of the number\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num < 0)
                printf("Square root of negative number is not defined in real numbers.\n");
            else
                printf("Square root = %.2f\n", sqrt(num));
            break;

        case 2:
            printf("Square = %d\n", num * num);
            break;

        case 3:
            printf("Cube = %d\n", num * num * num);
            break;

        case 4:
            if (isPrime(num))
                printf("%d is a prime number.\n", num);
            else
                printf("%d is not a prime number.\n", num);
            break;

        case 5: {
            long long fact = factorial(num);
            if (fact == -1)
                printf("Factorial is not defined for negative numbers.\n");
            else
                printf("Factorial = %lld\n", fact);
            break;
        }

        case 6:
            primeFactors(num);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}