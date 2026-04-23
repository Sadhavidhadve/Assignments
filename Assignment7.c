#include <stdio.h>
#define MAX 3

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[MAX];
    for (int i = 0; i < MAX; i++) {
        printf("\nEnter Roll, Name, Marks for student %d: ", i+1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\n%-5s %-15s %-8s %s\n", "Roll", "Name", "Marks", "Result");
    for (int i = 0; i < MAX; i++) {
        printf("%-5d %-15s %-8.2f %s\n",
            s[i].roll, s[i].name, s[i].marks,
            s[i].marks >= 40 ? "Pass" : "Fail");
    }
    return 0;
}
