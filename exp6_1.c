#include <stdio.h>

// Recursive factorial
long int fact_rec(int n) {
    if (n == 0)
        return 1;
    return n * fact_rec(n - 1);
}

// Non-recursive factorial
long int fact_nonrec(int n) {
    long int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int n, r;
    long int nCr;

    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    nCr = fact_rec(n) / (fact_rec(r) * fact_rec(n - r));

    printf("Using Recursive Factorial:\n");
    printf("nCr = %ld\n", nCr);

    nCr = fact_nonrec(n) / (fact_nonrec(r) * fact_nonrec(n - r));
    printf("Using Non-Recursive Factorial:\n");
    printf("nCr = %ld\n", nCr);

    return 0;
}
