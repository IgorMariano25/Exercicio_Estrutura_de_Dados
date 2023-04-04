#include <stdio.h>
int main()
{
    int carta1,carta2,carta3,carta4,carta5;
    char resposta;

    scanf("%i%i%i%i%i", &carta1,&carta2,&carta3,&carta4,&carta5);

    if ((carta1 < carta2) && (carta2 < carta3) && (carta3 < carta4) && (carta4 < carta5))
    {
        resposta = 'C';
    } else if ((carta1 > carta2) && (carta2 > carta3) && (carta3 > carta4) && (carta4 > carta5))
    {
        resposta = 'D';
    } 
    else {
        resposta = 'N';
    }

    printf("%c\n", resposta);
    return 0;
}