#include <stdio.h>
#include <string.h>

typedef char String[255];

struct registro_pessoa
{
    String nome;
    String cpf;
};

int main()
{

    struct registro_pessoa teste_pessoa;
    strcpy(teste_pessoa.cpf, "12345678900");
    strcpy(teste_pessoa.nome, "Igor Mariano");

    printf("Nome: %s\n", teste_pessoa.nome);
    printf("CPF: %s", teste_pessoa.cpf);
    return 0;
}
