#include <stdio.h>

int main()
{
    int num, soma = 0, digito;

    printf("Digite um numero inteiro de 100 a 999: ");
    scanf("%d", &num);

    if (num < 100 || num > 999)
    {
        printf("Erro: o numero deve estar no intervalo de 100 a 999.\n");
        return 0;
    }

    int num_copia = num;

    while (num_copia != 0)
    {
        digito = num_copia % 10;
        soma = soma + digito;
        num_copia = num_copia / 10;
    }

    printf("A soma dos digitos do numero %d e: %d\n", num, soma);

    return 0;
}
