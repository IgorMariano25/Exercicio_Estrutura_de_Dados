#include <stdio.h>

int main(int argc, char const *argv[])
{
    int horas_trabalhadas;
    float salario_bruto, salario_liquido, valor_horas;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%i", &horas_trabalhadas);

    printf("Informe o valor pago por hora: R$ ");
    scanf("%f", &valor_horas);

    salario_bruto = horas_trabalhadas * valor_horas;

    if (salario_bruto <= 1200) // Passou no teste
    {
        salario_liquido = salario_bruto;
    }
    else if (salario_bruto > 1200 && salario_bruto <= 1800) // Passou no teste
    {
        salario_liquido = salario_bruto * 0.90;
    }
    else if (salario_bruto > 1800 && salario_bruto <= 2200) // Passou no teste
    {
        salario_liquido = salario_bruto * 0.85;
    }
    else
    {
        salario_liquido = salario_bruto * 0.725; // Passou no teste
    }

    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Salario Liquido: R$ %.2f", salario_liquido);

    return 0;
}
