#include <stdio.h>
 
typedef struct reg_no {
    float info;
    struct reg_no *prox;
} no;

int estah_vazia (no *lista) {
    if (lista == NULL)
        return 1;
    else return 0;
}

no *cria_no(float valor) {
    no *novo_no = (no *) malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->prox = NULL;
    return novo_no;
}

no *insere_no_fim(no *lista, float valor) {
    no *novo_no = cria_no(valor);
    if (estah_vazia (lista)){
        lista = novo_no;
    } else {
        no *no_atual = lista;
        while (no_atual->prox != NULL) {
            no_atual = no_atual->prox;
        }
        no_atual->prox = novo_no;
    }
    return lista;
}


void libera_lista(no *lista) {
    no *no_atual, *prox_no;
    no_atual = lista;
    while (no_atual != NULL) {
        prox_no = no_atual->prox;
        free(no_atual);
        no_atual = prox_no;
    }
}


int main(){

    no *minha_lista = NULL;

    minha_lista = insere_no_fim(minha_lista, 2);
    minha_lista = insere_no_fim(minha_lista, 3);

    return 0;
}
