#include<stdio.h>
#include<stdlib.h>

//estrutura ponto para armazenar coordenadas x e y
typedef struct {
    float x;
    float y;
} ponto;

//função para calcular a area do poligono 
float calcularArea(ponto *vertices, int numVertices) {
    float area = 0.0;
    int j = numVertices - 1;

    for (int i = 0; i < numVertices; i++)
    {
        area += (vertices[j].x + vertices[i].x) * (vertices[j].y - vertices[i].y);
        j = i;
    }

    return 0.5 * abs(area);
    
}

int main(int argc, char const *argv[])
{
    //abre o arquivo de entrada vertices.txt para leitura
    FILE *arquivo = fopen("vertices.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    int numVertices;
    fscanf(arquivo, "%d", &numVertices);

    if (numVertices < 3){
        printf("O poligono deve ter no minimo 3 vertices\n");
        fclose(arquivo);
        return 1;
    }

    //aloca memoria para armazenar os vertices
    ponto *vertices = (ponto *) malloc(sizeof(ponto) * numVertices);

    if (vertices == NULL) {
        printf("Erro ao alocar memoria\n");
        fclose(arquivo);
        return 1;
    }

    //lê as coordenadas dos vertices do arquivo
    for (int i = 0; i < numVertices; i++) {
        if (fscanf(arquivo, "%f %f", &vertices[i].x, &vertices[i].y) != 2) {
            printf("Erro ao ler as coordenadas do vertice %d\n", i + 1);
            free(vertices);
            fclose(arquivo);
            return 1;
        }
    }

    //fecha o arquivo
    fclose(arquivo);

    //calcula a area do poligono
    float area = calcularArea(vertices, numVertices);

    //exibe o resultado
    printf("Area do poligono: %.2f\n", area);

    //libera a memoria alocada para os vertices
    free(vertices);
    
    return 0;
}
