#include <stdio.h>
int main()
{
    int valores[20],numero, posicao, index = 0;

    scanf("%i", &numero);
    while (numero != -1)
    {

        if (index == 19)
        {
            printf("Tamanho da lista Excedido");
            printf("Digite agora o número que deseja adicionar na lista e sua posição");
            break;
        }

        valores[index] = numero;
        scanf("%i", &numero);
        index++;
    }

    scanf("%i%i", &numero,&posicao);
    if (posicao > index || posicao < 0)
    {
        printf("Valor inserido é inválido");
        scanf("%i%i", &numero,&posicao);
    }
    else 
    {
        for (int i = index; i >= posicao; i--)
        {
            valores[i + 1] = valores[i];
        }
    }
    valores[posicao] = numero;
    index++;
    
    for (int i = 0; i < index; i++)
    {
        printf("%i", valores[i]);
    }
    return 0;
}