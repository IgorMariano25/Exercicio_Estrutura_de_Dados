#include <stdio.h>

int main()
{
    int matriz[3][3] = {{0}}, contador = 1, soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        soma += matriz[i][i];
    }
    printf("%i", soma);
    return 0;
}
