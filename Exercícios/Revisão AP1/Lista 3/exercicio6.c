#include <stdio.h>

int main()
{
    int inteiros[20], soma = 0;
    float media = 0.0;

    printf("Digite 20 valores inteiros: ");

    for (int i = 0; i < 20; i++)
    {
        scanf("%i", &inteiros[i]);
        soma += inteiros[i];
    }

    media = soma / 20;

    printf("Soma: %i\n", soma);
    printf("Media: %2.f\n", media);

    printf("Valores acima da media: ");
    for (int j = 0; j < 20; j++)
    {
        if (j > media)
        {
            printf("%i ", j);
        }
    }

    return 0;
}
