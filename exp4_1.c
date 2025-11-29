#include <stdio.h>

int globalVar = 10;   // Global variable

void display() {
    printf("Global variable inside function = %d\n", globalVar);
}

int main() {
    printf("Global variable inside main = %d\n", globalVar);
    display();
    return 0;
}
