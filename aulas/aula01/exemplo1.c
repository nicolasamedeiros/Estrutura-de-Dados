#include<stdio.h>

int fatorial (int n) {
    if (n == 0)
        return 1;
    else
        return n * fatorial(n-1);
}

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("O resultado é %d", fatorial(n));
    return;
}