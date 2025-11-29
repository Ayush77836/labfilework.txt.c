#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");  // Open file in read mode

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);   // Close file

    return 0;
}
