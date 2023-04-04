#include <string.h>
#include <stdio.h>

int main()
{
    char nome1[50], nome2[50], valor1[10],valor2[10];
    
    strcpy(nome1, "talita");
    strcpy(nome2, "talita");

    strcpy(valor1, "101");
    strcpy(valor2, "34");

    if (strcmp(nome1, nome2) == 0)
    {
        printf("As strings são iguais \n");
    } else printf("As stings são diferentes \n");

    printf("%i", strcmp(valor1, valor2));
    return 0;
}
