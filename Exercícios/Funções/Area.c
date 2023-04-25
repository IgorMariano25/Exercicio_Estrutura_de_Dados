#include <stdio.h>

#define pi 3.14159265358979323846
float area(float raio)
{
    float resultado;
    resultado = pi * ((raio) * (raio));
    return resultado;
}
int main()
{
    float raio_circunferencia;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio_circunferencia);
    while (raio_circunferencia != -1)
    {
        printf("AREA: %.2f\n", area(raio_circunferencia));

        printf("Digite o valor do raio: ");
        scanf("%f", &raio_circunferencia);
    }
    return 0;
}
