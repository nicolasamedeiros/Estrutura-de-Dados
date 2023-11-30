#include<stdio.h>

int fibonaci (int n) {
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}

void main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Resultado: %d", fibonaci(n));
    system("pause");
}