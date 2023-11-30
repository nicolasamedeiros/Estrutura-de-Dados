#include<stdio.h>

int *criarVetor(int tamanho){
    int *vetor = malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = 2*i + 3;
    }
    return vetor;
}

int main()
{
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *meuVetor = criarVetor(tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\t", meuVetor[i]);
    }
    free(meuVetor);
    
    return 0;
}
