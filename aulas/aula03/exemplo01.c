#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//criar arquivo
int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    fclose(arquivo);
    return 0;
}
