#include <stdio.h>

int main()
{
    int numero, maior = 0, menor, contador = 0;
    float media = 0, soma = 0;

    scanf("%i", &numero);
    menor = numero;
    soma = numero;

    while (numero != 0 || numero < 0)
    {
        scanf("%i", &numero);
        if (numero > maior)
        {
            maior = numero;
        }

        if (numero < menor && numero != 0)
        {
            menor = numero;
        }
        soma += numero;
        contador++;
    }

    media = soma / contador;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior: %i\n", maior);
    printf("Menor: %i", menor);

    return 0;
}
