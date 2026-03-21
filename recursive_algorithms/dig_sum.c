#include <stdio.h>

int dig_sum(int);

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    printf("Sum of your number digits is: %d", dig_sum(num));
    return 0;
}

int dig_sum(int num) {
    return num / 10 == 0 ? num : num % 10 + dig_sum(num / 10);
}