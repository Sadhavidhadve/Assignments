#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n;
    printf("How many random numbers? ");
    scanf("%d", &n);
    srand(time(NULL));  // seed with current time
    printf("Random numbers (1-100):\n");
    for (int i = 0; i < n; i++)
        printf("%d\n", (rand() % 100) + 1);
    return 0;
}
