#include <stdio.h>

int main()
{
    int matriz[5][5] = {{0}};
    int preencher_matriz = 1;
    int soma_linha_4 = 0;
    int soma_coluna_2 = 0;
    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;
    int soma_todos_valores = 0;

    // Preenche a matriz e soma todos os elementos dela;
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            matriz[linha][coluna] = preencher_matriz;
            soma_todos_valores += matriz[linha][coluna];
            preencher_matriz++;
        }
    }

    // Soma os valores da linha 4
    for (int i = 0; i < 5; i++)
    {
        soma_linha_4 += matriz[3][i];
    }

    // Soma os valores da coluna 2
    for (int j = 0; j < 5; j++)
    {
        soma_coluna_2 += matriz[j][2];
    }

    // Soma os valores da diagonal principal
    for (int k = 0; k < 5; k++)
    {
        soma_diagonal_principal += matriz[k][k];
    }

    // Soma os valores da diagonal secundária
    for (int l = 0; l < 5; l++)
    {
        soma_diagonal_secundaria += matriz[l][4 - l];
    }

    // Printando a matriz
    printf("- - - - - - MATRIZ - - - - - - - - ");
    printf("\n");
    for (int m = 0; m < 5; m++)
    {
        for (int n = 0; n < 5; n++)
        {
            printf("%d\t", matriz[m][n]);
        }
        printf("\n");
    }
    printf(" - - - - - - - - - - - - - - - - -\n\n");

    // Exibi todos os resultados da questão
    printf("Soma dos valores da linha 4 da matriz: %i\n", soma_linha_4);
    printf("Soma dos valores da coluna 2 da matriz: %i\n", soma_coluna_2);
    printf("Soma dos valores diagonal principal da matriz: %i\n", soma_diagonal_principal);
    printf("Soma dos valores da diagonal secundaria da matriz: %i\n", soma_diagonal_secundaria);
    printf("Soma de todos os valores da matriz: %i\n", soma_todos_valores);

    return 0;
}
