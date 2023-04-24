#include <stdio.h>

int main()
{
    int n, k, max_votos, vencedor;
    int votos[101] = {0};

    scanf("%d", &n);

    while (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            votos[i] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d \t", &k);
                if (k == 1)
                {
                    votos[j]++;
                }
            }
        }

        max_votos = 0;
        for (int i = 1; i <= n; i++)
        {
            if (votos[i] > max_votos)
            {
                max_votos = votos[i];
                vencedor = i;
            }
        }

        printf("%d\n", max_votos);

        scanf("%d", &n);
    }

    return 0;
}