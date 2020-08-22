#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float num1, num2, soma, sub, multi, div;

    printf("Calculadora 1.0\n");
    printf("Coloque o primeiro numero a ser procesado: ");
    scanf("%f", &num1);
    printf("Coloque o segundo numero a ser processado: ");
    scanf("%f", &num2);

    soma =  num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    // Para limitar a quantidade de casas decimais no float (%f) basta colocar um ponto (.) e a quantidade de linhas que você quer.
        //Ex: %.2f (CORRETO)
        //Ex: %f ("ERRADO") nessa ocasião

    printf("A soma e: %.2f\n", soma);
    printf("A subtracao e: %f\n", sub);
    printf("A multiplicacao e: %f\n", multi);
    printf("A divisao e: %.2f\n", div);


    return 0;
}

    //https://www.youtube.com/watch?v=aGAm63yOhwU