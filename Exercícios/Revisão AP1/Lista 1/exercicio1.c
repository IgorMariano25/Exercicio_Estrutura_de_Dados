#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, menor = 0, maior = 0;
    float media;
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%i", &valor3);

    media = ((valor1 + valor2 + valor3) / 3.0);

    if ((valor1 > valor2) && (valor1 > valor3))
    {
        maior = valor1;
    }
    else if ((valor2 > valor1) && (valor2 > valor3))
    {
        maior = valor2;
    }
    else
    {
        maior = valor3;
    }

    if ((valor1 < valor2) && (valor1 < valor3))
    {
        menor = valor1;
    }
    else if ((valor2 < valor1) && (valor2 < valor3))
    {
        menor = valor2;
    }
    else
    {
        menor = valor3;
    }

    printf("\nMaior valor: %i\n", maior);
    printf("Menor valor: %i\n", menor);
    printf("Media: %.2f\n", media);
    return 0;
}
