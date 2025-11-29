#include <stdio.h>

// Structure for complex number
struct Complex {
    float real;
    float imag;
};

// Function to read complex number
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to display complex number
void printComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

// Function to subtract two complex numbers
struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number\n");
    c1 = readComplex();

    printf("Enter second complex number\n");
    c2 = readComplex();

    sum = add(c1, c2);
    diff = sub(c1, c2);

    printf("Sum = ");
    printComplex(sum);

    printf("Difference = ");
    printComplex(diff);

    return 0;
}
