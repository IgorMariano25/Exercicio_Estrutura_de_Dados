#include <stdio.h>

int main()
{
    int numero_informado, maior_numero = -1;
    int tamanho_sequencia = 0;
    scanf("%d", &numero_informado);
    
    while (numero_informado != 0 && tamanho_sequencia <= 100)
    {
        scanf("%d", &numero_informado);
        if (( numero_informado >= 1 ) && ( numero_informado <= 100) && ( numero_informado % 10 == 0 ))
        {
            if (numero_informado > maior_numero)
            {
                maior_numero = numero_informado;
            }
            tamanho_sequencia++;
        }
    }
    printf("%d\n", maior_numero);
    return 0;
}