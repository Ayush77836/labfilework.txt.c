#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid\n");

        if (a == b && b == c)
            printf("Equilateral Triangle");
        else if (a == b || b == c || a == c)
            printf("Isosceles Triangle");
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("Right Angle Triangle");
        else
            printf("Scalene Triangle");
    } else {
        printf("Triangle is NOT valid");
    }
    return 0;
}
