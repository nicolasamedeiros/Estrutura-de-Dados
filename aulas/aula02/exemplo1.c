#include<stdio.h>

int main()
{
    //declarando vetor de inteiros
    int numeros[5] = {1, 2, 3, 4, 5};

    //declarando vetor de caracteres
    char nome[10] = "Exemplo";

    //impressão
    printf("O terceiro valor do vetor de inteiros eh: %d\n", numeros[2]);
    printf("Primeira letra do nome %c\n", nome[0]);
    printf("Teste 01: %d\n", nome[0]);
    printf("Teste 02: %c\n", nome[0] + 1);
    return 0;
}
