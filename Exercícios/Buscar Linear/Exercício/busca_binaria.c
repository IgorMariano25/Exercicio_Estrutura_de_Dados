#include <stdio.h>

int main(){
    int lista_valores[20] = {3,6,10,11,18,19,25,26,31,32,38,39,40,64,78,89,97,108,111,120};
    int index_final = 19, index_inicio = 0, index_meio = 19/2;

    while (index_final > index_inicio){
        if (lista_valores[index_meio] == 15)
        {
            printf("%i", 15);
            break;
        }
        else if (lista_valores[index_meio] > 15)
        {
            index_final = index_meio - 1;
            index_meio = (index_final + index_inicio) / 2;
        }
        else if (lista_valores[index_meio] < 15)
        {
            index_inicio = index_meio + 1;
            index_meio = (index_final + index_inicio) / 2;
        }
        else {
            printf("Fora da lista");
        }
    }
    return 0;
}
