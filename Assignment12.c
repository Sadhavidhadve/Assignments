#include <stdio.h>
int main() {
    int a, b, x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Smallest divisor
    x = a; y = b;
    int sd_a = a, sd_b = b;
    for (int i = 2; i <= a; i++) { if (a % i == 0) { sd_a = i; break; } }
    for (int i = 2; i <= b; i++) { if (b % i == 0) { sd_b = i; break; } }
    printf("Smallest divisor of %d: %d\n", a, sd_a);
    printf("Smallest divisor of %d: %d\n", b, sd_b);
    // GCD (Euclidean)
    while (y != 0) { int t = y; y = x % y; x = t; }
    printf("GCD: %d\n", x);
    return 0;
}
