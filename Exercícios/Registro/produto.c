#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef char texto[255];

struct Produto
{
    int codigo;
    texto nome;
    float preco;
    int quantidade;
};

struct Produto criaProduto()
{
    struct Produto novo_produto;
    printf("Informe o codigo do prouto: ");
    scanf("%i", &novo_produto.codigo);

    printf("Informe o nome do produto: ");
    getchar(); // para consumir o caractere de nova linha pendente no buffer de entrada
    fgets(novo_produto.nome, 255, stdin);

    printf("Informe o preco do produto: ");
    scanf("%f", &novo_produto.preco);

    printf("Informe a quantidade do produto: ");
    scanf("%i", &novo_produto.quantidade);

    return novo_produto;
};

void cabecalhoInformacoes()
{
    printf("\n------------------------------\n");
    printf("     Informacoes do Produto\n");
    printf("------------------------------\n");
};

void informacoesProduto(struct Produto produto)
{
    printf("Codigo: %i\n", produto.codigo);
    printf("Nome: %s", produto.nome);
    printf("Preco: R$ %.2f\n", produto.preco);
    printf("Quantidade: %i\n", produto.quantidade);
};
int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    struct Produto produto1 = criaProduto();
    cabecalhoInformacoes();
    informacoesProduto(produto1);

    return 0;
}