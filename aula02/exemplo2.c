#include<stdio.h>

int main()
{
    //exemplo de matriz 2x3
    int matriz[2][3] = {
    {1,2,3},
    {4,5,6}};

    int soma = 0;

    //imrpimido o ultimo elemento da matriz
    printf("Elemento da 2 linha e 3 coluna: %d\n", matriz[1][2]);

    //somando todos os elementos da matiz
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            soma = soma + matriz[i][j];
        }
    }    
    printf("Soma dos elementos da matriz: %d\n", soma);
    return 0;
}
