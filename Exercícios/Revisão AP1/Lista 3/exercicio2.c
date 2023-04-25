#include <stdio.h>

int main()
{
    char string[100];
    int tamanho = 0;

    printf("Digite uma string: ");
    scanf("%s", string);

    while (string[tamanho] != '\0')
    {
        tamanho++;
    }

    printf("A string tem %d caracteres.\n", tamanho);

    return 0;
}
