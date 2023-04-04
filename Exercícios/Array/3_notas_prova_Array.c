// QUESTÃO 3)

// Leia,no máximo , 20 números inteiros e armazene os em um vetor. Em
// seguida, inverta as posições dentro do vetor (último vai para posição 1,
// penúltimo para a posição 2 e assim por diante). Imprima o vetor resultante.

#include <stdio.h>
int main(){
    float notas[10], nota;
    int index = 0;
    
    scanf("%f", &nota);
    while (nota != -1)
    {
    	notas[index] = nota;
        index++;
        scanf("%f", &nota);
    }
    return 0;
}