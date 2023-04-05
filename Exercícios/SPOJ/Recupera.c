#include <stdio.h>

int main()
{

    int instancia = 0;
    int numero_achado = 0;
    int soma = 0;
    int n;

    scanf("%i", &n);

    while (n != 0)
    {
        instancia = instancia + 1;
        int lista[n - 1];

        for (int i = 0; i <= n - 1; i++)
        {
            scanf("%i", &lista[i]);
        }

        for (int i = 0; i <= n - 1; i++)
        {
            soma = soma + lista[i];
            printf("Posicao: %i\t", lista[i] - 1);
            printf("Soma: %i\n", soma);

            for (int j = n - 1; j >= i; j--)
            {
                if (soma == lista[j])
                {
                    numero_achado = soma;
                    break;
                }
            }
        }
        printf("Instância %i\n", instancia);
        if (numero_achado)
        {
            printf("%i\n", numero_achado);
        }
        else
        {
            printf("nao achei");
        }
        scanf("%i", &n);
    }

    return 0;
}