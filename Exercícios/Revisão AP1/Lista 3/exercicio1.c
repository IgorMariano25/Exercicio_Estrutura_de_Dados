#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[25];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            contador++;
        }
    }

    printf("Quantidade de vogais: %i", contador);
    return 0;
}
