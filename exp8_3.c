#include <stdio.h>

void changeValues(int *a, int *b) {
    *a = *a + 10;
    *b = *b + 20;
}

int main() {
    int x = 5, y = 10;

    printf("Before Function Call:\n");
    printf("x = %d, y = %d\n", x, y);

    changeValues(&x, &y);

    printf("After Function Call:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
