#include <stdio.h>

int termial(int numero)
{
    for (int i = 0; i < numero; i++)
    {
        if (numero == 1)
        {
            return 1;
        }
        else
        {
            return numero + termial(numero - 1);
        }
    }
}

int main()
{
    int numero;
    scanf("%i", &numero);
    printf("%i", termial(numero));
    return 0;
}