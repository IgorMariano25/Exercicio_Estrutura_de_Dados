#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string[100];
    int tamanho = 0;

    printf("Digite uma string: ");
    scanf("%s", &string);

    while (string[tamanho] != '\0')
    {
        string[tamanho] = toupper(string[tamanho]);
        tamanho++;
    }

    printf("Texto maiusculo: %s", string);
    return 0;
}
