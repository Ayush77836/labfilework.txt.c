#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 15)
        printf("Starvation");
    else if (bmi <= 17.5)
        printf("Anorexic");
    else if (bmi <= 18.5)
        printf("Underweight");
    else if (bmi <= 24.9)
        printf("Ideal");
    else if (bmi <= 25.9)
        printf("Overweight");
    else if (bmi <= 39.9)
        printf("Obese");
    else
        printf("Morbidity Obese");

    return 0;
}
