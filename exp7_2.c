#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee emp[100];
    int i;

    for (i = 0; i < 100; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Pay: ");
        scanf("%f", &emp[i].basic);

        emp[i].gross = emp[i].basic + (0.52 * emp[i].basic);
    }

    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < 100; i++)
        printf("%s\t\t%.2f\n", emp[i].name, emp[i].gross);

    return 0;
}
