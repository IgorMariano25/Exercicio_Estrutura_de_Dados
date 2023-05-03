#include <stdio.h>

int potencia(int numero)
{
    if (numero == 0)
    {
        return 1;
    }
    else if (numero == 1)
    {
        return 2;
    }
    else
    {
        return 2 * (potencia(numero - 1));
    }
}
int main()
{
    int numero;
    printf("Informe o valor da potencia: ");
    scanf("%i", &numero);

    printf("O resultado de 2 eleavado a potencia %i e: %i", numero, potencia(numero));
    return 0;
}