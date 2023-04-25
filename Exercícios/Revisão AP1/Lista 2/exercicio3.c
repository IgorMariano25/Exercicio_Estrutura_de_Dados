#include <stdio.h>

int main()
{
    int n, m, k;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n);

    printf("Digite o segundo valor: ");
    scanf("%i", &m);

    printf("Digite o terceiro valor: ");
    scanf("%i", &k);

    for (int i = n; i < m; i++)
    {
        if (i % k == 0)
        {
            printf("%i ", i);
        }
    }

    return 0;
}