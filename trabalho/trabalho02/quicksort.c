#include<stdio.h>
#include<string.h>

void quickSort(char *arr[], int inicio, int fim, int *trocas, int *comparacoes) {
    if (inicio < fim) {
        int i = inicio, j = fim;
        char *pivo = arr[(inicio + fim) / 2]; 

        while (i <= j) {
            while (strcmp(arr[i], pivo) < 0) {
                (*comparacoes)++; 
                i++;
            }
            while (strcmp(arr[j], pivo) > 0) {
                (*comparacoes)++;
                j--;
            }
            if (i <= j) {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                (*trocas)++;
                i++;
                j--;
            }
        }

        quickSort(arr, inicio, j, trocas, comparacoes);
        quickSort(arr, i, fim, trocas, comparacoes);
    }
}

int main () {
    char *arr[20] = { "maca", "banana", "pera", "uva", "laranja", "abacaxi", "limão", "manga", "abacate", "kiwi", "cereja", "morango", "pêssego", "goiaba", "melancia", "framboesa", "amora", "caqui", "figo", "papaya"};

    int trocas = 0, comparacoes = 0;

    //chama a função quicksort para ordenar o vetor
    quickSort(arr, 0 , 19, &trocas, &comparacoes);

    //mostrar o vetor ordenado no terminal
    printf("Vetor ordenado:\n");
    for (int i = 0; i < 20; i++) {
        printf("%s\n", arr[i]);
    }

    //gerar um arquivo de saida com o vetor ordenado 
    FILE *arquivo;
    arquivo = fopen("saida.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    for (int i = 0; i < 20; i++)
    {
        fprintf(arquivo, "%s\n", arr[i]);
    }
    
    
    //exibir o número de trocas, comparações e mediana
    printf("Numero de trocas: %d\n", trocas);
    printf("Numero de comparacoes: %d\n", comparacoes);
    printf("Mediana: %s\n", arr[9]);

    return 0; 
}