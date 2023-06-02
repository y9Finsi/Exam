#include <stdio.h>

float sumFoo(int n) {
    float sum = 0.0;
    float term;

    // Вычисляем каждый член суммы и добавляем его к общей сумме
    for(int i = 1; i <= n; i++) {
        term = (float)i * i / fact(i);
        sum += term;
    }

    return sum;
}

int fact(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);
    printf("Сумма ряда: %f", sumFoo(n));
    return 0;
}
