#include <stdio.h>

int fact(int);

int main() {
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    printf("Factorial of this number is: %d", fact(n));
    return 0;
}

int fact(int num) {
    return num == 1 ? num : num * fact(num - 1);
}