#include <stdio.h>

int main()
{
    int matriz[5][5] = {{0}}, preencher_matriz = 1, soma = 0;

    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            matriz[linha][coluna] = preencher_matriz;
            soma += matriz[linha][coluna];
            preencher_matriz++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
    }

    printf("Soma de todos os valores da matriz: %i", soma);
    return 0;
}
