#include <string.h>
#include <stdio.h>

int main()
{
    char cadeia_caracteres[50];

    scanf("%s", &cadeia_caracteres);
    for (int i = 0; i < strlen(cadeia_caracteres); i++){
        for ( int j = 0; j <= i; j++ )
        {
           printf("%c", cadeia_caracteres[j]);
        }
        printf("\n");
    }
    return 0;
}

