#include <stdio.h>

int main()
{
    int a[20], b[20];
    char c[40];

    printf("Digite os valores para o primeiro vetor (quantidade = 20): ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%i", &a[i]);
        c[i] = a[i];
    }

    printf("Digite os valores para o segundo vetor (quantidade = 20): ");

    for (int j = 20; j < 40; j++)
    {
        scanf("%i", &b[j]);
        c[j] = b[j];
    }

    printf("Array c = ");
    for (int k = 0; k < 40; k++)
    {
        printf("%i ", c[k]);
    }

    return 0;
}
