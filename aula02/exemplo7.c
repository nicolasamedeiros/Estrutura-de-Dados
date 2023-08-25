#include<stdio.h>

struct Pessoa
{
    char nome[20];
    int idade;
};

void modificarPessoa(struct Pessoa *p){
    p->idade += 1;
}

int main()
{
    struct Pessoa pessoa1 = {"Nicolas", 20};
    modificarPessoa(&pessoa1);

    struct pessoa x = {"João", 25};
    modificarPessoa(&x);

    printf("Nome %s\n", x.nome);
    printf("Idade %d\n", x.idade);
    
    //exibir dados da pessoa
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    return 0;
}
