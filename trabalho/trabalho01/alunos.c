#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *entrada = fopen("DadosEntrada.csv", "r");
    FILE *saida = fopen("SituacaoAlunos.csv", "w");

    if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir os arquivos\n");
        return 1;
    }

    char linha[100];
    while (fgets(linha, sizeof(linha), entrada) != NULL) {
        
        //dividir a linha em tokens
        char *token = strtok(linha, ",");
        char nome[100];
        strcpy(nome, token);

        //pulando o token telefone
        token = strtok(NULL, ",");

        //pulando o token materia
        token = strtok(NULL, ",");

        token = strtok(NULL, ",");
        double nota1 = atof(token);

        token = strtok(NULL, ",");
        double nota2 = atof(token);

        //calcular media dos alunos
        double media = (nota1 + nota2) / 2.0;

        //situação final do aluno
        char situacao[20];
        if (media >= 7.0) {
            strcpy(situacao, "Aprovado");
        } else {
            strcpy(situacao, "Reprovado");
        }

        //escrever no arquivo de saida
        fprintf(saida, "%s, %.2lf, %s\n", nome, media, situacao);
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}
