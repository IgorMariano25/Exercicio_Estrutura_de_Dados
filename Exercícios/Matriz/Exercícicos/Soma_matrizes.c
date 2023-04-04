#include <stdio.h>

int main()
{
    int matriz_1[4][4], matriz_2[4][4], matriz_3[4][4], contador = 1;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz_1[i][j] = contador;
            matriz_2[i][j] = matriz_1[i][j];
            matriz_3[i][j] = matriz_1[i][j] + matriz_2[i][j];
            contador++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for ( int j = 0; j < 4; j++)
        {
            printf("%i\t", matriz_3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

