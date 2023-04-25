#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50], string2[50];
    int posicao;

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    printf("Informe o valor da posicao que deseja adcionar a segunda string: ");
    scanf("%i", &posicao);

    if (posicao < 0 || posicao > (strlen(string1) + strlen(string2)))
    {
        printf("ERRO: Valor da posicao e invalido !");
    }
    else
    {
        for (int i = strlen(string1); i >= posicao; i--)
        {
            string1[i + strlen(string2)] = string1[i];
        }

        for (int j = 0; j < strlen(string2); j++)
        {
            string1[posicao + j] = string2[j];
        }
    }

    printf("Nova palavra: %s", string1);

    return 0;
}
