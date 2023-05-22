#include <stdio.h>
#include <string.h>

typedef char String[255];

void procedimentoMenuEndereco()
{
    printf("\n--------------------\n     ENDERECO\n--------------------\n");
}

void procedimentoMenuInformacoesPessoais()
{
    printf("\n------------------------------\n     INFORMACOES PESSOAIS\n------------------------------\n");
}

struct registro_endereco
{
    String logradouro;
    int numero;
    String bairro;
    String cidade;
    String estado;
};

struct registro_pessoa
{
    String nome;
    String cpf;
    struct registro_endereco endereco;
};

int main()
{

    struct registro_pessoa teste_pessoa;
    strcpy(teste_pessoa.cpf, "12345678900");
    strcpy(teste_pessoa.nome, "Igor Mariano");

    strcpy(teste_pessoa.endereco.logradouro, "Rua");
    teste_pessoa.endereco.numero = 53;
    strcpy(teste_pessoa.endereco.bairro, "Sao Francisco");
    strcpy(teste_pessoa.endereco.cidade, "cidade A");
    strcpy(teste_pessoa.endereco.estado, "estado B");

    procedimentoMenuInformacoesPessoais();
    printf("Nome: %s\n", teste_pessoa.nome);
    printf("CPF: %s\n", teste_pessoa.cpf);
    procedimentoMenuEndereco();
    printf("Logradoudo: %s\n", teste_pessoa.endereco.logradouro);
    printf("Numero: %d\n", teste_pessoa.endereco.numero);
    printf("bairro: %s\n", teste_pessoa.endereco.bairro);
    printf("cidade: %s\n", teste_pessoa.endereco.cidade);
    printf("estado: %s\n", teste_pessoa.endereco.estado);

    return 0;
}
