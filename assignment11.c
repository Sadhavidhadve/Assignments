#include <stdio.h>
#include <math.h>

int main() {
    int n, choice, i, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            if(n < 0)
                printf("Square root not defined for negative numbers.\n");
            else
                printf("Square Root = %.2f\n", sqrt(n));
            break;

        case 2:
            printf("Square = %d\n", n * n);
            break;

        case 3:
            printf("Cube = %d\n", n * n * n);
            break;

        case 4:
            if(n <= 1)
                isPrime = 0;
            else {
                for(i = 2; i <= n/2; i++) {
                    if(n % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if(isPrime)
                printf("%d is a Prime number.\n", n);
            else
                printf("%d is NOT a Prime number.\n", n);
            break;

        case 5:
            if(n < 0)
                printf("Factorial not defined for negative numbers.\n");
            else {
                for(i = 1; i <= n; i++)
                    fact = fact * i;

                printf("Factorial = %lld\n", fact);
            }
            break;

        case 6:
            if(n <= 1)
                printf("No prime factors.\n");
            else {
                printf("Prime Factors: ");
                for(i = 2; i <= n; i++) {
                    while(n % i == 0) {
                        printf("%d ", i);
                        n = n / i;
                    }
                }
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
