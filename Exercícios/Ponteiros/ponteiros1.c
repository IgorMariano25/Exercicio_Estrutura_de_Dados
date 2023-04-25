#include <stdio.h>

int main()
{
    int x, y;
    int *posicaoX, *posicaoY;

    printf("Digite o valor de X: ");
    scanf("%i", &x);
    posicaoX = &x;

    printf("Digite o valor de Y: ");
    scanf("%i", &y);
    posicaoY = &y;

    if (posicaoX > posicaoY)
    {
        printf("Posicao de memoria de X e maior que a posicao de memoria em Y\n");
        printf("POSICAO DE MEMORIA X: %x", posicaoX);
    }
    else
    {
        printf("Posicao de memoria de Y e maior que a posicao de memoria em X");
        printf("POSICAO DE MEMORIA Y: %x", posicaoY);
    }

    return 0;
}
