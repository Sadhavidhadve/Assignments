#include <stdio.h>
#include <math.h>
int main() {
    int terms;
    double x, sum = 0, term, num;
    long long den;
    printf("Enter angle (degrees): "); scanf("%lf", &x);
    printf("Enter number of terms: "); scanf("%d", &terms);
    double rad = x * M_PI / 180.0;
    for (int i = 0; i < terms; i++) {
        int power = 2 * i + 1;
        
        num = 1;
        for (int j = 0; j < power; j++) num *= 
        den = 1;
        for (int j = 1; j <= power; j++) den *= j;
        term = num / den;
        if (i % 2 == 0) sum += term;
        else sum -= term;
    }
    printf("sin(%.2f) = %.6f\n", x, sum);
    printf("Library sin = %.6f\n", sin(rad));
    return 0;
}
