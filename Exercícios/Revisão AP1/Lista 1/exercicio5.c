#include <stdio.h>
#include <ctype.h>

int main()
{
    float temperatura_Celsius, temperatura_Fahrenheit;
    char escolha;

    printf("Digite C para Celsisus e F para Fahrenheit: ");
    scanf("%c", &escolha);

    if (toupper(escolha) == 'C')
    {
        printf("Informe a temperatura em Fahrenheit para converter para graus Celsius: ");
        scanf("%f", &temperatura_Fahrenheit);

        temperatura_Celsius = (temperatura_Fahrenheit - 32.00) * (100.00 / (212.00 - 32.00));
        if (temperatura_Celsius == -0.00)
        {
            temperatura_Celsius = 0.00;
            printf("Temperatura em Celsius: %.2f", temperatura_Celsius);
        }
        else
        {
            printf("Temperatura em Celsius: %.2f", temperatura_Celsius);
        }
    }
    else if (toupper(escolha) == 'F')
    {
        printf("Informe a temperatura em Celsius para converter para Fahrenheit: ");
        scanf("%f", &temperatura_Celsius);

        temperatura_Fahrenheit = 32.00 + ((212.00 - 32.00) / 100.00) * temperatura_Celsius;
        printf("Temperatura em Fahrenheit: %.2f", temperatura_Fahrenheit);

        if (temperatura_Fahrenheit == -0.00)
        {
            temperatura_Fahrenheit = 0.00;
            printf("Temperatura em Celsius: %.2f", temperatura_Fahrenheit);
        }
    }
    return 0;
}
