#include <stdio.h>
int main() {
    int n, og, digit, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    og = n;

    while (n > 0) {
        digit = n % 10;            
        sum = sum + (digit * digit * digit); 
        n = n / 10;                
    }

    if (sum == og) {
        printf("%d is an Armstrong number.\n", og);
    } else {
        printf("%d is not an Armstrong number.\n", og);
    }

    return 0;
}
