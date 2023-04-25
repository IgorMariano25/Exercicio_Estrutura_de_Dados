#include <stdio.h>

int main()
{
    int n, m, k, soma = 0, media = 0, contador = 0;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n);

    printf("Digite o segundo valor: ");
    scanf("%i", &m);

    printf("Digite o terceiro valor: ");
    scanf("%i", &k);

    for (int i = n + 1; i < m; i++)
    {
        if (i % k == 0)
        {
            soma += i;
            contador++;
        }
    }

    media = soma / contador;

    printf("Soma: %i\n", soma);
    printf("Media: %i", media);
    return 0;
}