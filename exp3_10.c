#include <stdio.h>

int main() {
    int limit = 20;
    int a, b, c, d, n;

    printf("Ramanujan Numbers:\n");

    for(n = 1; n <= limit*limit*limit*2; n++) {
        int count = 0;
        for(a = 1; a <= limit; a++)
            for(b = a; b <= limit; b++)
                if (a*a*a + b*b*b == n)
                    count++;

        if (count >= 2)
            printf("%d\n", n);
    }
    return 0;
}
