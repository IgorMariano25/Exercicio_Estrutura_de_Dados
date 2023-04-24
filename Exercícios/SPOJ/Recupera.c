#include <stdio.h>

int main()
{

    int n;
    int instancia = 0;
    int soma = 0;

    while (scanf("%i", &n) != EOF)
    {
        if (n <= 0 || n > 100)
        {
            scanf("%i", &n);
        }
        else
        {
            instancia = instancia + 1;
            soma = 0;
            int lista[n];

            for (int i = 0; i <= n - 1; i++)
            {
                scanf("%i", &lista[i]);
            }

            for (int j = 0; j <= n - 1; j++)
            {
                if (soma == lista[j])
                {
                    printf("Instancia %i\n", instancia);
                    printf("%i\n", soma);
                }
                else if (soma != lista[j])
                {
                    soma = soma + lista[j];
                }
                else
                {
                    printf("nao achei");
                }
            }
        }
    }
    scanf("%i", &n);
    return 0;
}