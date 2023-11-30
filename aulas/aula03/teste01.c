#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *arquivo;
    
    int quantidades;
    int contador = 0;
    char produto[50];
    float total = 0;
    float preco;
    float subtotal;
    
    arquivo = fopen("mercado.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    
    while(fscanf(arquivo, "%s %d %f", produto, &quantidades, &preco) != EOF){
        contador++;
        subtotal = quantidades * preco;
        total = total + subtotal;
        printf("%d)\t%s\t%d*%.2f = %.2f\n", contador, produto, quantidades, preco, subtotal);
    }
    fclose(arquivo);

    FILE *fp;

    fp = fopen("mercado.txt", "a");
    fprintf(fp, "\nO valor de todos os produtos somados e %.2f", total);
    fclose(fp);
    return 0;
}
