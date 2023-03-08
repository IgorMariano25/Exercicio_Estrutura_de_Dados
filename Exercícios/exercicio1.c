#include <stdio.h>
int main(){
    int n;
    scanf("%i", &n);
    if (n < 1){
        printf("Valor menor que 1, não é possível imprimir os números nesse intervalo ");
    };

    for (int i = 1; i < n;i++) {
        printf("%i", i);
    };
}