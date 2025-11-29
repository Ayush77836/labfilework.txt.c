#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\na = %d\n", a);
    printf("b = %d\n", b);

    printf("\nBitwise AND (a & b) = %d", a & b);
    printf("\nBitwise OR  (a | b) = %d", a | b);
    printf("\nBitwise NOT (~a) = %d", ~a);
    printf("\nBitwise NOT (~b) = %d", ~b);

    return 0;
}
