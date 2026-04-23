#include <stdio.h>

long factIterative(int n) {
    long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

long factRecursive(int n) {
    if (n <= 1) return 1;
    return n * factRecursive(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Iterative: %ld\n", factIterative(n));
    printf("Recursive: %ld\n", factRecursive(n));
    return 0;
}
