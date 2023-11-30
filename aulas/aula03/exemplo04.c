#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *arquivo;
    char linha[100];
    int num = 0;

    arquivo = fopen("dados.txt", "r");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    } 

    //mostra o que tem dentro do arquivo
    //estrutura fgets ARMAZENA O TEXTO, TAMANHO DO QUE ARMAZENA, E A VARIAVEL DO ARQUIVO
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        num++;
        printf("%d\t%s", num, linha);
    }
    fclose(arquivo);
    return 0;
}
