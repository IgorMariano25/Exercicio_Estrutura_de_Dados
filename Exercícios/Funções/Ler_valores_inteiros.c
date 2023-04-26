#include <stdio.h>

int ler_inteiros(int array[], int numero, int tamanho_array)
{
    array[tamanho_array] = numero;
}

int ler_reais(int array[], int numero, int tamanho_arry)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%i ", array[i]);
    }
}

int main()
{
    int array_inteiros[25], tamanho_arry_inteiros = 0;
    int valor_informado;
    while (valor_informado != -1)
    {
        printf("Digite o valor para adicionar no Array: ");
        scanf("%i", &valor_informado);
        if (valor_informado == -1)
        {
            break;
        }
        else
        {
            ler_inteiros(array_inteiros, valor_informado, tamanho_arry_inteiros);
            tamanho_arry_inteiros++;
        }
    }

    imprimi_arry(array_inteiros, tamanho_arry_inteiros);

    return 0;
}
