#include <stdio.h>

// 
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
     
    temp = a; a = b; b = temp;
    printf("After swap (without pointers): a=%d b=%d\n", a, b);
     
    swapWithPointers(&a, &b);
    printf("After swap (with pointers): a=%d b=%d\n", a, b);
    return 0;
}
