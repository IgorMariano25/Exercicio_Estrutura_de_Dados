#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no
{
    float info;
    struct reg_no *prox;
} no;

int estah_vazia(no *lista)
{
    if (lista == NULL)
        return 1;
    else
        return 0;
}

no *cria_no(float valor)
{
    no *novo_no = (no *)malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->prox = NULL;
    return novo_no;
}

no *insere_no_fim(no *lista, float valor)
{
    no *novo_no = cria_no(valor);
    if (estah_vazia(lista))
    {
        lista = novo_no;
    }
    else
    {
        no *no_atual = lista;
        while (no_atual->prox != NULL)
        {
            no_atual = no_atual->prox;
        }
        no_atual->prox = novo_no;
    }
    return lista;
}

void libera_lista(no *lista)
{
    no *no_atual, *prox_no;
    no_atual = lista;
    while (no_atual != NULL)
    {
        prox_no = no_atual->prox;
        free(no_atual);
        no_atual = prox_no;
    }
}

void imprime_nos(no *lista)
{
    if (estah_vazia(lista))
    {
        printf("Lista vazia");
    }
    else
    {
        no *no_atual = lista;
        while (no_atual != NULL)
        {
            printf("%.2f ", no_atual->info);
            no_atual = no_atual->prox;
        }
    }
}

no *insere_no_inicio(no *lista, float valor)
{
    no *novo_no = cria_no(valor);
    novo_no->prox = lista;
    lista = novo_no;
    return lista;
}

int tamanho(no *lista)
{
    int contatador_ponteiro = 0;
    no *no_atual = lista;
    while (no_atual != NULL)
    {
        contatador_ponteiro += 1;
        no_atual = no_atual->prox;
    }
    return contatador_ponteiro;
}

int busca_no(no *lista, int valor_lista)
{
    no *no_atual = lista;
    int boolean = 0;
    while (no_atual != NULL)
    {
        if (no_atual->info == valor_lista)
        {
            boolean = 1;
            break;
        }
        no_atual = no_atual->prox;
    }

    if (boolean != 0)
    {
        printf("Encontrei o valor %i na lista", valor_lista);
    }
    else
    {
        printf("Nao encontrei nenhum valor ! :(");
    }

    return 0;
}

void pular_linha()
{
    printf("\n");
}

no *remove_no(no *lista, int valor_lista)
{
    no *no_atual, *no_anterior = NULL;
    no_atual = lista;

    if (no_atual->info == valor_lista)
    {
        lista = lista->prox;
        free(no_atual);
    }
    else
    {
        while (no_atual != NULL)
        {
            no_anterior = no_atual;
            no_atual = no_atual->prox;

            if (no_atual->info == valor_lista)
            {
                no_anterior->prox = no_atual->prox;
                free(no_atual);
            }
        }
    }

    return lista;
}

void verificar_valor_na_posicao(no *lista, int valor_procurado)
{
    int contador = 0;
    no *no_atual = lista;

    while (contador != valor_procurado)
    {
        no_atual = no_atual->prox;
        contador++;
    }

    printf("%f", no_atual->info);
}

no insere_no_posicao(no *lista, int posicao, int valor)
{
    int comparador = 0;
    no *novo_no = cria_no(valor);
    no *no_atual = lista;
    while (comparador != posicao - 1)
    {
        no_atual = no_atual->prox;
        comparador++;
    }
    novo_no->prox = no_atual->prox;
    no_atual->prox = novo_no;
}

void remove_na_posicao(no *lista, int posicao)
{
    no *no_atual, *no_anterior = NULL;
    no_atual = lista;
    int verifica_posicao = 0;

    while (verifica_posicao != posicao)
    {
        no_anterior = no_atual;
        no_atual = no_atual->prox;
        verifica_posicao++;
    }

    no_anterior->prox = no_atual->prox;
    free(no_atual);
}
int main()
{

    no *minha_lista = NULL;

    minha_lista = insere_no_inicio(minha_lista, 1);
    minha_lista = insere_no_fim(minha_lista, 2);
    minha_lista = insere_no_fim(minha_lista, 3);
    imprime_nos(minha_lista);
    printf("\nSua lista possui tamanho: %i", tamanho(minha_lista));
    pular_linha();
    busca_no(minha_lista, 5);
    pular_linha();
    busca_no(minha_lista, 2);
    pular_linha();
    // minha_lista = remove_no(minha_lista, 2);
    imprime_nos(minha_lista);
    pular_linha();
    verificar_valor_na_posicao(minha_lista, 2);
    pular_linha();
    remove_na_posicao(minha_lista, 1);
    imprime_nos(minha_lista);

    return 0;
}