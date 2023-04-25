#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string1[50];
    char string2[50];
    int posicao = -1;

    printf("Digite a primeira palavra: ");
    scanf("%s", &string1);

    printf("Digite a segunda palavra: ");
    scanf("%s", &string2);

    for (int i = 0; i <= strlen(string1) - strlen(string2); i++)
    {
        int j;
        for (j = 0; j < strlen(string2); j++)
        {
            if (string1[i + j] != string2[j])
            {
                break;
            }
        }
        if (j == strlen(string2))
        {
            posicao = i;
            break;
        }
    }
    printf("Posicao da string '%s' em '%s': %d\n", string2, string1, posicao);
}