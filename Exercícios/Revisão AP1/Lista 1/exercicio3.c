#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h1, m1, s1;
    int h2, m2, s2;
    int h3, m3, s3;
    int diferenca = 0;
    int conversao1 = 0, conversao2 = 0;

    printf("Digite a primeira hora, minuto e segundo respectivamente nessa ordem: ");
    scanf("%i%i%i", &h1, &m1, &s1);

    h1 = h1 * 60 * 60;
    m1 = m1 * 60;

    printf("Digite a segunda hora, minuto e segundo respectivamente nessa ordem: ");
    scanf("%i%i%i", &h2, &m2, &s2);

    h2 = h2 * 60 * 60;
    m2 = m2 * 60;

    h3 = (((h1 - h2) / 60) / 60);
    m3 = (m1 - m2) / 60;
    s3 = (s1 - s2);

    printf("%i:%i:%i", h3, m3, s3);

    return 0;
}
