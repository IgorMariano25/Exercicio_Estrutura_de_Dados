#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter, arrayLetras[] = {
                       'A',
                       'B',
                       'C',
                       'D',
                       'E',
                       'F',
                       'G',
                       'H',
                       'I',
                       'J',
                       'K',
                       'L',
                       'M',
                       'N',
                       'O',
                       'P',
                       'Q',
                       'R',
                       'S',
                       'T',
                       'U',
                       'V',
                       'W',
                       'X',
                       'Y',
                       'Z'};

    while (scanf("%c", &caracter) != EOF)
    {
        caracter = toupper(caracter);
        int letra_encontrada = 0;
        for (int i = 0; i < 26; i++)
        {
            if (caracter == arrayLetras[i])
            {
                letra_encontrada = 1;
                if (i >= 0 && i <= 2)
                {
                    printf("2");
                }
                else if (i >= 3 && i <= 5)
                {
                    printf("3");
                }
                else if (i >= 6 && i <= 8)
                {
                    printf("4");
                }
                else if (i >= 9 && i <= 11)
                {
                    printf("5");
                }
                else if (i >= 12 && i <= 14)
                {
                    printf("6");
                }
                else if (i >= 15 && i <= 18)
                {
                    printf("7");
                }
                else if (i >= 19 && i <= 21)
                {
                    printf("8");
                }
                else if (i >= 22 && i <= 25)
                {
                    printf("9");
                }
                break;
            }
        }
        if (!letra_encontrada)
        {
            printf("%c", caracter);
        }
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char caracter, arrayLetras[25] = {
//                        'A',
//                        'B',
//                        'C',
//                        'D',
//                        'E',
//                        'F',
//                        'G',
//                        'H',
//                        'I',
//                        'J',
//                        'K',
//                        'L',
//                        'M',
//                        'N',
//                        'O',
//                        'P',
//                        'Q',
//                        'R',
//                        'S',
//                        'T',
//                        'U',
//                        'V',
//                        'W',
//                        'X',
//                        'Y',
//                        'Z'};

//     while (scanf("%c", &caracter) != EOF)
//     {
//         caracter = toupper(caracter);
//         for (int i = 0; i < 26; i++)
//         {
//             if (caracter == arrayLetras[0] || caracter == arrayLetras[1] || caracter == arrayLetras[2])
//             {
//                 // numero_telefone[i] += "2";
//                 printf("2");
//             }
//             else if (caracter == arrayLetras[3] || caracter == arrayLetras[4] || caracter == arrayLetras[5])
//             {
//                 // numero_telefone[i] += "3";
//                 printf("3");
//             }
//             else if (caracter == arrayLetras[6] || caracter == arrayLetras[7] || caracter == arrayLetras[8])
//             {
//                 // numero_telefone[i] += "4";
//                 printf("4");
//             }
//             else if (caracter == arrayLetras[9] || caracter == arrayLetras[10] || caracter == arrayLetras[11])
//             {
//                 // numero_telefone[i] += "5";
//                 printf("5");
//             }
//             else if (caracter == arrayLetras[12] || caracter == arrayLetras[13] || caracter == arrayLetras[14])
//             {
//                 // numero_telefone[i] += "6";
//                 printf("6");
//             }
//             else if (caracter == arrayLetras[15] || caracter == arrayLetras[16] || caracter == arrayLetras[17] || caracter == arrayLetras[18])
//             {
//                 // numero_telefone[i] += "7";
//                 printf("7");
//             }
//             else if (caracter == arrayLetras[19] || caracter == arrayLetras[20] || caracter == arrayLetras[21])
//             {
//                 // numero_telefone[i] += "8";
//                 printf("8");
//             }
//             else if (caracter == arrayLetras[22] || caracter == arrayLetras[23] || caracter == arrayLetras[24] || caracter == arrayLetras[25])
//             {
//                 // numero_telefone[i] += "9";
//                 printf("9");
//             }
//             else if (caracter == '0')
//             {
//                 printf("0");
//             }
//             else if (caracter == '1')
//             {
//                 printf("1");
//             }
//             else
//                 printf("%c", caracter);
//         }
//         caracter = toupper(caracter);
//     }
//     return 0;
// }

// int numeros[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 0, 7, 7, 8, 8, 8, 9, 9, 9, 9};
// while (scanf("%c", &caracter) != EOF)
// {
//     if ((caracter >= "A" && caracter <= "Z") || (caracter >= "a" && caracter <= "z"))
//     {
//         int index = toupper(caracter) - "A";
//         printf("%d", numeros[index]);
//     }
//     else if (caracter == "0" || caracter == "1" || caracter == "-")
//         printf("%c", caracter);
// }
// return 0;
