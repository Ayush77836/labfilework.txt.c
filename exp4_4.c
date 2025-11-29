#include <stdio.h>

void count() {
    static int counter = 0;
    counter++;
    printf("Counter = %d\n", counter);
}

int main() {
    count();
    count();
    count();
    return 0;
}
