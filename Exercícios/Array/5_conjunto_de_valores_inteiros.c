// QUESTÃO 5)

#include <stdio.h>
int main(){

    int valores[50];
    int index = 0;
    int numero;

    printf("Digite um valor inteiro para ser armazenado no vetor: ");
    scanf("%i", &numero);

    while (numero != -1)
    {
        valores[index] =  numero;
        printf("Digite um valor inteiro para ser armazenado no vetor: ");
        scanf("%i", &numero);
        index++;
    }

    for (int i = 0; i < index; i++)
    {
        printf("%i", valores[i]);
        if (valores[i] % 2 == 0 )
        {
            valores[i] = 2;
        } 
        
        else {
            valores[i] = 1;
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%i\n", valores[i]);
    }
    
    return 0;
}