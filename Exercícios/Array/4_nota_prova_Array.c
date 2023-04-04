// QUESTÃO 4)

#include <stdio.h>
int main(){

    int vetor[20], numero;
    int index = 0;
    int auxiliar;

    scanf("%i", &numero);
    while (numero != -1)
    {
        numeros[index] = numero;
        index ++;
        scanf("%i", $numero);
    }

    int j = index - 1;

    for (int i = 0; i < index / 2; i++){
        auxiliar = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = numeros[i];
        j--;
    }

    for (int i =  0; i < index; i++)
    {
        printf("%i", &numero[i])
    };

    return 0;
}