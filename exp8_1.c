#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';

    int *ip = &i;
    float *fp = &f;
    char *cp = &c;

    printf("Integer value = %d\n", i);
    printf("Address of integer = %p\n", ip);
    printf("Value using pointer = %d\n\n", *ip);

    printf("Float value = %.2f\n", f);
    printf("Address of float = %p\n", fp);
    printf("Value using pointer = %.2f\n\n", *fp);

    printf("Character value = %c\n", c);
    printf("Address of character = %p\n", cp);
    printf("Value using pointer = %c\n", *cp);

    return 0;
}
