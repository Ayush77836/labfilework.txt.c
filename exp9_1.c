#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("sample.txt", "w");   // Create / open file in write mode

    if (fp == NULL) {
        printf("File cannot be created!");
        return 0;
    }

    fprintf(fp, "Hello World\n");
    fprintf(fp, "This text is written into a file.\n");
    fprintf(fp, "File handling in C.");

    fclose(fp);   // Close the file

    printf("Data written to file successfully.");

    return 0;
}
