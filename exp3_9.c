#include <stdio.h>

int main() {
    float population = 100000;

    for(int year = 1; year <= 10; year++) {
        population = population * 1.10;
        printf("Year %d Population = %.0f\n", year, population);
    }
    return 0;
}
