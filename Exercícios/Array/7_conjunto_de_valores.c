// QUESTÃO 7)

#include <stdio.h>

int main() {
    int numeros [50];
    int limite;
    int contador = 0; 

    scanf("%d", &limite);

    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &numeros[i]);
    }
    
    for (int i = 0; i < limite; i++)
    {
        for (int j = i+1; j < limite; j++)
        {
            if (numeros[i] == numeros[j])
            {
                contador += 1;
            }
              
        }

        if (contador >= 1)
        {
            printf("%d\n", numeros[i]);
        }

        contador = 0;  
    }   

    return 0;
}