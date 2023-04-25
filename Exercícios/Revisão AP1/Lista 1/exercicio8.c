#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Informe o valor do primeiro lado do triangulo: ");
    scanf("%i", &x);

    printf("Informe o valor do segundo lado do triangulo: ");
    scanf("%i", &y);

    printf("Informe o valor do terceiro lado do triangulo: ");
    scanf("%i", &z);

    if (((x + y) > z) && ((z + y) > x) && ((z + x) > y))
    {
        if (x == y && y == z)
        {
            printf("Triangulo equilatero");
        }
        else if ((x == y) || (z == y) || (x == z))
        {
            printf("Triangulo isosceles");
        }
        else if ((x != y) && (y != z) && (x != z))
        {
            printf("Triangulo escaleno");
        }
    }
    else
    {
        printf("Nao foi possivel formar um triangulo com os valores informados :(");
    }

    return 0;
}
