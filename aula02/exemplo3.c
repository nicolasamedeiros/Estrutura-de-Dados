#include<stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};

int main()
{
    struct Pessoa x;   
    strcpy(x.nome, "Nicolas");
    x.idade = 20;
    x.altura = 1.81;

    printf("Nome = %s\n", x.nome);
    printf("Idade: %d\n", x.idade);
    printf("Altura: %.2f\n", x.altura);
    printf("O nome eh %s tem %d anos e %.2f de altura\n", x.nome, x.idade, x.altura);
    return 0;
}
