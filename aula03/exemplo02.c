#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//adicionando conteudo no arquivo
int main(int argc, char const *argv[])
{
    FILE *arquivo;
    int numero = 125;
    char palavra[] = "Nicolas Almeida Medeiros";

    arquivo = fopen("saida.txt", "w");

    if (arquivo ==  NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    fprintf(arquivo, "Numero: %d\nPalavra: %s\n", numero, palavra);

    fclose(arquivo);
    return 0;
}
