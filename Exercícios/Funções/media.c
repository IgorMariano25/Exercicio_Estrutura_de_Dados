#include <stdio.h>

float media(int array[], int tamanho)
{
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += array[i];
    }

    return soma / tamanho;
}

void ler_inteiros(int array[], int numero, int tamanho_array)
{
    array[tamanho_array] = numero;
}

void ler_reais(int array[], int numero, int tamanho_array)
{
    array[tamanho_array] = numero;
}

int quantidade_valores_arry(int array[], int tamanho)
{
    int quantidade_valores_lidos = 0;
    for (int i = 0; i < tamanho; i++)
    {
        array[i] += 0;
        quantidade_valores_lidos++;
    }

    return quantidade_valores_lidos;
}

int main()
{
    int array_inteiros[25], tamanho_arry_inteiros = 0;
    int array_reais[25], tamanho_arry_reais = 0;
    int opcao_escolhida;
    int valor_informado;

    while (valor_informado != -1)
    {
        printf("Digite o valor para adicionar no Array: ");
        scanf("%i", &valor_informado);

        if (valor_informado == -1)
        {
            printf("\n");
            break;
        }

        printf("Informe o arry onde deseja adicionar o valor\n1 - ARRAY INTEIROS\n2 - ARRAY REAIS\nSua escolha sera: ");
        scanf("%i", &opcao_escolhida);

        if (opcao_escolhida == 1)
        {
            ler_inteiros(array_inteiros, valor_informado, tamanho_arry_inteiros);
            tamanho_arry_inteiros++;
        }
        else if (opcao_escolhida == 2)
        {
            ler_reais(array_reais, valor_informado, tamanho_arry_reais);
            tamanho_arry_reais++;
        }
    }

    printf("Quantidade de valores inteiros lidos: %i\n", quantidade_valores_arry(array_inteiros, tamanho_arry_inteiros));
    printf("Quantidade de valores reais lidos: %i\n", quantidade_valores_arry(array_reais, tamanho_arry_reais));
    printf("Media de valores do array inteiros: %.2f\n", media(array_inteiros, quantidade_valores_arry(array_inteiros, tamanho_arry_inteiros)));
    printf("Media de valores do array reais: %.2f\n", media(array_reais, quantidade_valores_arry(array_reais, tamanho_arry_reais)));
    return 0;
}