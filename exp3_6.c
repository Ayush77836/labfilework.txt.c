#include <stdio.h>

int main() {
    int n, pos=0, neg=0, zero=0;
    char ch;

    do {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n > 0) pos++;
        else if (n < 0) neg++;
        else zero++;

        printf("Continue? (y/n): ");
        scanf(" %c", &ch);

    } while (ch=='y' || ch=='Y');

    printf("Positive=%d Negative=%d Zero=%d",
            pos, neg, zero);
    return 0;
}
