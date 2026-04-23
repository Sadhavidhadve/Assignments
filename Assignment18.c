#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100], rev[100];
    int choice;
    printf("Enter string: "); scanf("%s", s1);
    printf("1.Length 2.Reverse 3.Palindrome? 4.Equality 5.Substring?\nChoice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Length: %zu\n", strlen(s1)); break;
        case 2:
            strcpy(rev, s1);
            int len = strlen(rev);
            for (int i = 0; i < len/2; i++) {
                char tmp = rev[i]; rev[i] = rev[len-1-i]; rev[len-1-i] = tmp;
            }
            printf("Reversed: %s\n", rev); break;
        case 3:
            strcpy(rev, s1);
            len = strlen(rev);
            for (int i = 0; i < len/2; i++) {
                char tmp = rev[i]; rev[i] = rev[len-1-i]; rev[len-1-i] = tmp;
            }
            printf(strcmp(s1, rev) == 0 ? "Palindrome\n" : "Not Palindrome\n"); break;
        case 4:
            printf("Enter second string: "); scanf("%s", s2);
            printf(strcmp(s1, s2) == 0 ? "Equal\n" : "Not Equal\n"); break;
        case 5:
            printf("Enter substring to search: "); scanf("%s", s2);
            printf(strstr(s1, s2) ? "Found\n" : "Not found\n"); break;
    }
    return 0;
}
