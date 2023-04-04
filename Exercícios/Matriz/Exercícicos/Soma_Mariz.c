#include <stdio.h>

int main()
{
    int matriz[4][3] = {{0}}, contador = 1, soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = contador;
            contador++;
            soma += matriz[i][j];
        }
    }
    printf("%i", soma);
    return 0;
}