#include <stdio.h>

double power(double num, int pow);

int main() {
    int pow;
    double num, res;
    printf("Enter number: ");
    scanf("%lf", &num);
    printf("Enter power: ");
    scanf("%d", &pow);
    res = power(num, pow);
    printf("Number power is: %lf", res);
    return 0;
}

double power(double num, int pow) {
    if (pow == 0) return 1;
    if (pow < 0) return 1 / power(num, -pow);
    return num * power(num, --pow);
}