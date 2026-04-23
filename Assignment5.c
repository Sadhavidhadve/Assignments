#include <stdio.h>
#define N 3

void addMatrices(int a[N][N], int b[N][N]) {
    printf("\nMatrix Addition:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
}

void saddlePoint(int a[N][N]) {
    int found = 0;
    for (int i = 0; i < N; i++) {
        int min = a[i][0], minCol = 0;
        for (int j = 1; j < N; j++)
            if (a[i][j] < min) { min = a[i][j]; minCol = j; }
        int isMax = 1;
        for (int k = 0; k < N; k++)
            if (a[k][minCol] > min) { isMax = 0; break; }
        if (isMax) {
            printf("Saddle point: %d at (%d,%d)\n", min, i, minCol);
            found = 1;
        }
    }
    if (!found) printf("No saddle point.\n");
}

int main() {
    int a[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[N][N] = {{9,8,7},{6,5,4},{3,2,1}};
    addMatrices(a, b);
    saddlePoint(a);
    return 0;
}
