#include <stdio.h>
int main()
{
    int i, soma = 0,intervalo_numeros_lidos,numeros_lidos;
    scanf("%i", &intervalo_numeros_lidos);
    for (i = 1; i <= intervalo_numeros_lidos; i++){
        scanf("%i", &numeros_lidos);
        soma += numeros_lidos;
    }
    printf("%i", soma);

    return 0;
}