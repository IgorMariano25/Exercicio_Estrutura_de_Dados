#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef char String[255];

struct Produto
{
    int Codigo;
    String Nome;
    float Preco;
    int Quantidade;
};

void cabecalhoInformacoes()
{
    printf("\n------------------------------\n");
    printf("     Informações do Produto\n");
    printf("------------------------------\n");
};

int main()
{
    setlocale(LC_ALL, "pt_BR");
    struct Produto Novo_Produto;
    Novo_Produto.Codigo = 0;
    strcpy(Novo_Produto.Nome, "Placa de Vídeo");
    Novo_Produto.Preco = 959.00;
    Novo_Produto.Quantidade = 1;

    cabecalhoInformacoes();
    printf("Código: %i\n", Novo_Produto.Codigo);
    printf("Nome: %s\n", Novo_Produto.Nome);
    printf("Preço: R$ %.2f\n", Novo_Produto.Preco);
    printf("Quantidade: %i\n", Novo_Produto.Quantidade);

    return 0;
}
