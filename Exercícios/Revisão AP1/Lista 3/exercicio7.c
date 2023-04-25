#include <stdio.h>

int main()
{
    int a[14], b[14], tamanhoB = 0;

    b[0] = a[0];
    for (int i = 1; i < 15; i++)
    {
        scanf("%i", &a[i]);
        if (a[i] != a[i - 1])
        {
            b[tamanhoB] = a[i];
            tamanhoB++;
        }
    }

    printf("b = ");
    for (int j = 0; j <= tamanhoB; j++)
    {
        if (j != tamanhoB)
        {
            printf("%i, ", b[j]);
        }
    }
    return 0;
}