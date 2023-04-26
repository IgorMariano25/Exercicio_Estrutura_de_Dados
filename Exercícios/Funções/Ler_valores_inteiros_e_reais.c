#include <stdio.h>

int ler_inteiros(int array[], int numero, int tamanho_array)
{
    array[tamanho_array] = numero;
}

int ler_reais(int array[], int numero, int tamanho_arry)
{
    array[tamanho_arry] = numero;
}

int quantidade_valores_arry(int array[], int tamanho)
{
    int quantidade_valores_lidos = 0;
    for (int i = 0; i < tamanho; i++)
    {
        quantidade_valores_lidos++;
    }
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

    return 0;
}
