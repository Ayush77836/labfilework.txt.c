#include <stdio.h>

int main() {
    int i = 10;
    float f = 20.5;
    char c = 'X';

    int *ip = &i;
    float *fp = &f;
    char *cp = &c;

    printf("Before Increment:\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n\n", cp);

    ip++;
    fp++;
    cp++;

    printf("After Increment:\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n", cp);

    return 0;
}
