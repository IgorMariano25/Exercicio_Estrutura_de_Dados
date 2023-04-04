#include <stdio.h>
int main()
{
    int numero_de_estrelas_obervadas = 0, numero_estrelas_estudadas, 
        fluxo_de_fotons, area_abertura_telescopio;

        scanf("%i", &area_abertura_telescopio);
        scanf("%i", &numero_estrelas_estudadas);

        for (int i = 1; i <= numero_estrelas_estudadas; i++)
        {
            scanf("%i", &fluxo_de_fotons);
            if (area_abertura_telescopio * fluxo_de_fotons >= 40000000)
            {
                numero_de_estrelas_obervadas += 1;
            }
        }
        printf("%i", numero_de_estrelas_obervadas);
    return 0;
}