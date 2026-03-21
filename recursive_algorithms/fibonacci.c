#include <stdio.h>

int fib(int);

int main() {
    int n;
    printf("What Fibonacci number do you need? ");
    scanf("%d", &n);
    printf("Your fibonacci number is: %d", fib(n));
    return 0;
}

int fib(int num) {
    return num <= 2 ? 1 : fib(num - 1) + fib(num - 2);
}