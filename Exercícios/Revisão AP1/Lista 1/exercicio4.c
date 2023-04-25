#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temperatura_Celsius;
    double temperatura_Fahrenheit;

    printf("Digite uma temperatura em Celsius para saber o equivalente em Fahrenheit: ");
    scanf("%i", &temperatura_Celsius);

    temperatura_Fahrenheit = 32.00 + ((212.00 - 32.00) / 100.00) * temperatura_Celsius;

    printf("Temperatura em Fahrenheit: %.2f", temperatura_Fahrenheit);
    return 0;
}
