#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    double x, term, sum;

    
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    term = x; 
    sum = x;

    printf("\nCalculation Steps:\n");
    printf("Term 1: %lf\n", term);

    for (i = 1; i < n; i++) {
        
        term = (term * -x * x) / ((2 * i) * (2 * i + 1));
        sum += term;
        
        printf("Term %d: %lf\n", i + 1, term);
    }

    printf("\nFinal Sum of Series: %lf", sum);
    printf("\nLibrary Function sin(%lf): %lf", x, sin(x));

    return 0;
}