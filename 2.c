#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ункция для вычисления факториала числа
int fac(int n) {
    if (n <= 1) return 1;
    return n * fac(n - 1);
}

//функция для вычисления суммы элементов последовательности
int sumFoo(int n) {
  // возвращаем 0, если n не положительное число
    if (n <= 0) return 0;
    // суммируя результаты и возвращая их
    return pow(n, n) / fac(n) + sumFoo(n - 1);
}

int main() {
    printf("%d", sumFoo(5));
    return 0;
}
