#include <stdio.h>

int main() {
    int num, shift;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter number of bits to shift: ");
    scanf("%d", &shift);

    printf("\nLeft Shift Result (num << shift) = %d", num << shift);
    printf("\nRight Shift Result (num >> shift) = %d", num >> shift);

    return 0;
}
