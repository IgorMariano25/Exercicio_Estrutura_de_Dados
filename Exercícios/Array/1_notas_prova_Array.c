// QUESTÃO 1)

// Leia 10 notas de alunos, armazene
// as em um vetor e, em seguida, imprima
// essas 10 notas na ordem inversa em que elas foram fornecidas.

#include <stdio.h>
int main()
{
    int notas_alunos[10];
    int nota;

    for ( int i = 0; i < 10; i++ )
    {
        printf("Informe a nota do aluno: ");
        scanf("%i", &nota);
        notas_alunos[i] = nota;
    }

    printf("\n- - - - - NOTAS - - - - -\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%i ", notas_alunos[i]);
    }

    return 0;
}
