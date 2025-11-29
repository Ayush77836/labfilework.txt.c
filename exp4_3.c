#include <stdio.h>

int main() {
    int x = 5;

    if (x > 0) {
        int y = 10;   // Block variable
        printf("Inside block: x = %d, y = %d\n", x, y);
    }

    printf("Outside block: x = %d\n", x);
    

    return 0;
}
