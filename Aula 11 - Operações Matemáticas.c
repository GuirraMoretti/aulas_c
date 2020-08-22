#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    a = 15;
    b = 20;

    //Soma de variaveis - Simbolo de (+) para somar os fatores
    int soma = a + b;
    printf("O resultado da soma e: %i\n" , soma);

    //Subtração de variaveis - Simbolo de (-) para diminuir os fatores
    int subtracao = b - a;
    printf("O resultado da subtracao e: %i\n", subtracao);

    //Multiplicação de variaveis - Simbolo de (*) para multiplicar os fatores
    int multi = a * b;
    printf("O valor da multiplicacao e: %i\n", multi );

    //Divisão de variaveis - Simbolo de (/) para dividir os fatores
    int div = b / 3;
    printf ("A divisao dos numeros e: %i", div );

    return 0;
}