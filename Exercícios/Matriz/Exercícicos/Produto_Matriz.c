#include <stdio.h>

int main()
{
    int matriz_1[4][3] = {{0}}, matriz_2[4][3] = {{0}}, matriz_3[4][3] = {{0}}, contador = 1;

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz_1[linha][coluna] = contador;
            matriz_2[linha][coluna] = contador;
            matriz_3[linha][coluna] = matriz_1[linha][coluna] * matriz_2[linha][coluna];
            contador++;
        }
    }

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%i\t", matriz_3[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
