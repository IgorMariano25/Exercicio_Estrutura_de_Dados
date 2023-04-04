#include <string.h>
#include <stdio.h>

int main()
{
    char ArrayCaracteres[50],ArrayInvertido[50];
    scanf("%s", &ArrayCaracteres);


    for (int i = 0, j = strlen(ArrayCaracteres); i < strlen(ArrayCaracteres); i++, j--)
    {
        printf("%c ", ArrayCaracteres[i]);
        ArrayInvertido[j] = ArrayCaracteres[i];
    }
    
    ArrayCaracteres = A

    printf("%s ", ArrayCaracteres);
    printf("%s ", ArrayInvertido);
    return 0;
}