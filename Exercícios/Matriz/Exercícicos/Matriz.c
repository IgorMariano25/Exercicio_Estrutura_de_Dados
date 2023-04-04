#include <stdio.h>

int main()
{
    int matriz[20][10] = {{0}}, contador = 1;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
