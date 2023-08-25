#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *arquivo;
    int numero;
    char palavra[50];

    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    
    //lendo um inteiro e palavra do arquivo 
    fscanf(arquivo, "%d %s", &numero, palavra);
    printf("Numero: %d\nPalavra: %s\n", numero, palavra);
    fclose(arquivo);
    return 0;
}
