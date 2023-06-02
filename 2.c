#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

float sumFoo(int n) {
    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        int factorial_i = factorial(i);
        sum += (float)(i * i) / factorial_i;
    }
    return sum;
}

int main() {
    int n;
    printf("Введите значение n: ");
    scanf("%d", &n);

    float result = sumFoo(n);
    printf("Результат: %.2f\n", result);

    return 0;
}