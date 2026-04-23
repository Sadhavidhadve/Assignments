#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[100], s2[100];
    int choice;
    do {
        printf("\n1.Length 2.Copy 3.Concat 4.Compare 5.Uppercase 6.Lowercase 7.Reverse 0.Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter string: "); scanf("%s", s1);
                printf("Length: %zu\n", strlen(s1)); break;
            case 2:
                printf("Enter source: "); scanf("%s", s1);
                strcpy(s2, s1);
                printf("Copied: %s\n", s2); break;
            case 3:
                printf("Enter s1 s2: "); scanf("%s %s", s1, s2);
                strcat(s1, s2);
                printf("Concatenated: %s\n", s1); break;
            case 4:
                printf("Enter s1 s2: "); scanf("%s %s", s1, s2);
                printf(strcmp(s1, s2) == 0 ? "Equal\n" : "Not Equal\n"); break;
            case 5:
                printf("Enter string: "); scanf("%s", s1);
                for (int i = 0; s1[i]; i++) s1[i] = toupper(s1[i]);
                printf("Upper: %s\n", s1); break;
            case 6:
                printf("Enter string: "); scanf("%s", s1);
                for (int i = 0; s1[i]; i++) s1[i] = tolower(s1[i]);
                printf("Lower: %s\n", s1); break;
            case 7:
                printf("Enter string: "); scanf("%s", s1);
                int len = strlen(s1);
                for (int i = 0; i < len/2; i++) {
                    char t = s1[i]; s1[i] = s1[len-1-i]; s1[len-1-i] = t;
                }
                printf("Reversed: %s\n", s1); break;
        }
    } while (choice != 0);
    return 0;
}
