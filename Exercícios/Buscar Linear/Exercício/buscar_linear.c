#include <stdio.h>

int main()
{
    int lista_valores[20] = {3,6,10,11,12,19,25,26,31,32,38,39,40,64};
    int esta_na_lista = -1;

    for ( int i = 0; i < 20; i++)
    {
        if (lista_valores[i] == 20)
        {
             esta_na_lista = 1;
        }
    }
        printf("%i", esta_na_lista);
    return 0;
}
