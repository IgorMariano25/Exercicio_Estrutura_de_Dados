// QUESTÃO 2)

// Leia,no máximo , 10 notas de alunos, armazene as em um vetor até que o
// usuário digite -1. Em seguida, imprima as notas na ordem inversa em que
// elas foram fornecidas, informando a média das notas. O valor -1 não deve
// ser armazenado no vetor.

#include <stdio.h>
int main()
{
    int notas_alunos[10], nota, soma = 0, media;
    
    while (nota !=-1)
    {
        printf("Informe a nota dos alunos: ");
        scanf("%i", &nota);
        notas_alunos[] = nota;
        soma += nota;
    }

    printf("- - - - - MÉDIA - - - - -");
    print(media = soma/i);

    printf("- - - - - NOTAS - - - - -");
    for (int i = 9; i >= 0; i--)
    {
        printf("%i", notas_alunos[i]);
    }

    return 0;
}
