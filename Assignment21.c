#include <stdio.h>
#include <stdlib.h>
int main() {
    char src[100], dest[100];
    FILE *fs, *fd;
    char ch;
    printf("Enter source file: "); scanf("%s", src);
    printf("Enter destination file: "); scanf("%s", dest);
    fs = fopen(src, "r");
    if (!fs) { printf("Cannot open source file!\n"); exit(1); }
    fd = fopen(dest, "w");
    if (!fd) { printf("Cannot open destination file!\n"); fclose(fs); exit(1); }
    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);
    fclose(fs);
    fclose(fd);
    printf("File copied successfully!\n");
    return 0;
}
