#include <stdio.h>

int main()
{
    int horas_trabalhada;
    float valor_hora, salario_semanal;

    printf("Informe a quantidade de horas trabalhadas na semana: ");
    scanf("%i", &horas_trabalhada);

    printf("Informe o valor pago por hora: R$ ");
    scanf("%f", &valor_hora);

    salario_semanal = horas_trabalhada * valor_hora;

    if (horas_trabalhada > 50)
    {
        salario_semanal = salario_semanal * 2;
    }
    else if (horas_trabalhada > 40 && horas_trabalhada < 50)
    {
        salario_semanal = salario_semanal * 1.20;
    }

    printf("Salario semanal: R$ %.2f", salario_semanal);
    return 0;
}
