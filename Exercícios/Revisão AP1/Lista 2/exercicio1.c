#include <stdio.h>

int main()
{
    int n, m;
    printf("Digite o primeiro valor: ");
    scanf("%i", &n);

    printf("Digite o segundo valor: ");
    scanf("%i", &m);

    for (int i = n; i < m; i++)
    {
        if (i % 2 != 0)
        {
            printf("%i ", i);
        }
    }

    return 0;
}
