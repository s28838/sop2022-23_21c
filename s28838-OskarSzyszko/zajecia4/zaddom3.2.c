#include <stdio.h>

// Funkcja iteracyjna obliczająca n-tą wartość ciągu Fibonacciego
int fibonacci(int n) {
    int a = 0;
    int b = 1;
    int temp;

    if (n == 0)
        return a;
    else if (n == 1)
        return b;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n;
    printf("Podaj liczbę n: ");
    scanf("%d", &n);

    printf("Ciąg Fibonacciego dla n = %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
