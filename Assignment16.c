#include <stdio.h>
int main() {
    int n;
    printf("Enter count N: ");
    scanf("%d", &n);
    int arr[100], even[100], odd[100], ec = 0, oc = 0;
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even[ec++] = arr[i];
        else odd[oc++] = arr[i];
    }
    printf("Even: ");
    for (int i = 0; i < ec; i++) printf("%d ", even[i]);
    printf("\nOdd:  ");
    for (int i = 0; i < oc; i++) printf("%d ", odd[i]);
    printf("\n");
    return 0;
}
