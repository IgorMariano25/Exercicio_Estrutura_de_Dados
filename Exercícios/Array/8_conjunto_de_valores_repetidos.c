// QUESTÃO 8)

#include <stdio.h>
int main(){
    int conjunto_1[10], conjunto_2[10];
    int valor_conjunto_1, valor_conjunto_2;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite 10 valores inteiros para adicionar no 1º conjunto: ");
        scanf("%i", &valor_conjunto_1);
        conjunto_1[i] = valor_conjunto_1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Digite 10 valores inteiros para adicionar no 2º conjunto: ");
        scanf("%i", &valor_conjunto_2);
        conjunto_2[i] = valor_conjunto_2;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; i < 10; j++)
        {
            if (conjunto_1[i] == conjunto_2[j])
            {
                print("%i", &con)
            }
        }
    }

    return 0;
}