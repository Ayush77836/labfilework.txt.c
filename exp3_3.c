#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter three points: ");
    scanf("%d %d %d %d %d %d",
          &x1, &y1, &x2, &y2, &x3, &y3);

    if ((x2 - x1)*(y3 - y1) == (x3 - x1)*(y2 - y1))
        printf("Points are Collinear");
    else
        printf("Points are NOT Collinear");

    return 0;
}
