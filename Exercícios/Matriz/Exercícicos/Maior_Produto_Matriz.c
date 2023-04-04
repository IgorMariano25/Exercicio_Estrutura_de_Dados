#include <stdio.h>

int main()
{
    int matriz_1[4][3] = {{0}}, matriz_2[4][3] = {{0}}, contador = 1, maior_valor_matriz = -1000;

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz_1[linha][coluna] = contador;

            if (matriz_1[linha][coluna] > maior_valor_matriz)
            {
                maior_valor_matriz = matriz_1[linha][coluna];
            } 
            contador++;
        }
    }

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz_2[linha][coluna] = matriz_1[linha][coluna] * maior_valor_matriz;
            printf("%i\t", matriz_2[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
