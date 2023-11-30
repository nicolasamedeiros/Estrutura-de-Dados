#include<stdio.h>

//passagem de parametros se dá por valor, logo, a função não altera o valor da variavel original
void exibirarray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int main()
{
    int meuArray[5] = {2, 5, 6, 9, 0};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);
    exibirarray(meuArray, tamanho);
    return 0;
}
