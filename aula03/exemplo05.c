#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("saida2.txt", "a"); //modo "a" acrescenta dados no final do arquivo
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    const char *mensagem = "\nSegundo teste do arquivo numero 5";
    fputs(mensagem, arquivo);
    return 0;
}
