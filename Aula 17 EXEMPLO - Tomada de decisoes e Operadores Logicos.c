#include <stdio.h>
#include <stdlib.h>

int main ()
/*
{
    int i;
    printf("Digite um numero igual de 5: \n"); //Informação a ser inserida
    scanf("%i", &i); //Recebendo a informação
    
    if (i==5) //Se i for igual a 5
    {
        printf("True"); //Escreva "TRUE"
    }else //Se não
    {
        printf("False"); //Escreva False
    }
    
    
    return 0;
}
*/

{
    int i;
    printf("Digite um numero diferente de 5: \n"); //Informação a ser inserida
    scanf("%i", &i); //Recebendo a informação
    
    if (i!=5) //Se i for diferente a 5
    {
        printf("Verdadeiro"); //Escreva "TRUE"
    }
        else //Se não
            {
                printf("Falso"); //Escreva "False"
            }
    
    
    return 0;
}

// https://www.youtube.com/watch?v=inciHPl6PTo --- Aula 17 - Tomada de Decisões e Operadores Lógicos
// http://excript.com/linguagem-c/tomada-decisao-operador-logico-c.html
