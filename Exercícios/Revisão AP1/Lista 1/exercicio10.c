#include <stdio.h>

int main()
{
    int numero, parte1, parte2, multiplicacao;

    printf("Digite um valor entre com 4 digitos: ");
    scanf("%i", &numero);

    if (numero < 1000)
    {
        printf("O valor digitado possui apenas 3 digitos !\n");
        return 0;
    }
    else if (numero > 9999)
    {
        printf("O valor digitado possui mais de 4 digitos !\n");
        return 0;
    }

    parte1 = numero / 100;
    parte2 = numero % 100;
    multiplicacao = (parte1 + parte2) * (parte1 + parte2);

    if (numero == multiplicacao)
    {
        printf("Primeira parte: %i\n", parte1);
        printf("Segunda parte: %i\n", parte2);
        printf("Multiplicacao: %i\n", multiplicacao);
    }
    else
    {
        printf("O valor informando nao atende a propriedade desejada :(");
    }

    return 0;
}
