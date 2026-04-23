#include <stdio.h>
#include <string.h>
#define MAX 5

struct Employee {
    char name[50], designation[50], gender[10], doj[15];
    float salary;
};

int main() {
    struct Employee e[MAX];
    int n;
    printf("Enter number of employees (max %d): ", MAX);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i+1);
        printf("Name: "); scanf("%s", e[i].name);
        printf("Designation: "); scanf("%s", e[i].designation);
        printf("Gender (Male/Female): "); scanf("%s", e[i].gender);
        printf("Date of Joining: "); scanf("%s", e[i].doj);
        printf("Salary: "); scanf("%f", &e[i].salary);
    }
    
    printf("\nTotal employees: %d\n", n);
    
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (strcasecmp(e[i].gender, "Male") == 0) male++;
        else female++;
    }
    printf("Male: %d, Female: %d\n", male, female);
    
    printf("Employees with salary > 10000:\n");
    for (int i = 0; i < n; i++)
        if (e[i].salary > 10000)
            printf("  %s (%.2f)\n", e[i].name, e[i].salary);

    printf("Asst Managers:\n");
    for (int i = 0; i < n; i++)
        if (strcasecmp(e[i].designation, "AsstManager") == 0)
            printf("  %s\n", e[i].name);
    return 0;
}
