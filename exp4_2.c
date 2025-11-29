#include <stdio.h>

int globalVar = 100;   // Global variable

void test() {
    int localVar = 50;  // Local variable
    printf("Inside function:\n");
    printf("Local = %d\n", localVar);
    printf("Global = %d\n", globalVar);
}

int main() {
    test();

    
    printf("Inside main: Global = %d\n", globalVar);

    return 0;
}
