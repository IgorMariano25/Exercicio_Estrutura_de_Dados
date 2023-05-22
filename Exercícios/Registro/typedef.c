#include <stdio.h>

typedef char texto[255];
typedef unsigned int natural;

int main()
{

    texto nome;
    natural idade;

    scanf("%[^\n]s", &nome); // Forma de pegar dados, mesmo quando esses possuem espaços
    scanf("%u", &idade);

    printf("Meu nome eh: %s\n", nome);
    printf("Minha idade eh: %i\n", idade);
    return 0;
}
