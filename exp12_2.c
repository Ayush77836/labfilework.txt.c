#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define ADD(a, b) ((a) + (b))

int main() {
    int n1, n2;

    printf("Enter a number: ");
    scanf("%d", &n1);

    printf("Square of %d = %d\n", n1, SQUARE(n1));

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Sum = %d", ADD(n1, n2));

    return 0;
}
