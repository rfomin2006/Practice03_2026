#include <stdio.h>

int fact(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}

int fact(int num) {
    return num == 1 ? num : num * fact(num - 1);
}