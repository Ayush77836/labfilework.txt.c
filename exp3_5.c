#include <stdio.h>

int main() {
    int l1,b1,l2,b2,l3,b3;
    int p1, p2, p3, max;

    printf("Enter l and b of 3 rectangles:\n");
    scanf("%d %d %d %d %d %d",
          &l1,&b1,&l2,&b2,&l3,&b3);

    p1 = 2*(l1+b1);
    p2 = 2*(l2+b2);
    p3 = 2*(l3+b3);

    max = (p1>p2)?((p1>p3)?p1:p3):((p2>p3)?p2:p3);

    printf("Highest Perimeter = %d", max);
    return 0;
}
