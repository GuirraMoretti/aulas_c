#include <stdio.h>
#include <stdlib.h>

void main()
{
    //TODO              SUMARIO
    //?                 (***) === REPETIÇÃO DA FRASE ENTRE PARENTESES


/*
?       Incremento ==> Aumentar o valor de um número, nesse caso, soma de SOMENTE 1 numero. 
!        Existem dois tipos de incremento;
!        O (pré-incremento) e o (pós-incremento);
!        O pré-incremento é o tipo qual o valor será incrementado/decrementado na intrução que a variavel estivar contida
!        Já o pós-incremento é o tipo qual o valor será incrementado/decrementado na proxima intrução
*/
    printf("Incremento\n");
    int i = 1; //? VAR I = 1;
    printf("%i\n", i);  //? Escreva i
    printf("%i\n", ++i); //? Escreva i, porém, existe um operado de PRÉ-INCREMENTO, ou seja, ele vai adicionar um numero antes de imprimir!!!
    printf("%i\n", i++); //? Escreva i, porém,  existe um operador de PÓS-INCREMENTO, ou seja, ele vai adicionar um numero depois de imprimir!!!
    //! Na linha acima será impresso i de acordo a linha 20, como há um operador de pos-incremento, na linha depois do 21, sera adicionado 1 ao i.
    printf("%i\n", i); //? Escreva i 

//?       Decremento ==>Diminuir o valor de um número, nesse caso, há subtração de somente 1 numero. 
    printf("=============================================\n");
    printf("Decremento\n");

    int d = 5;
    printf("%i\n", d); //? Escreva d
    printf("%i\n", --d); //? Escrava d, porém, como existe um operador de pré-incremento, ou seja, ele vai SUBTRAIR um numero antes de imprimir;
    printf("%i\n", d--); //? //? Escreva d, porém,  existe um operador de PÓS-INCREMENTO, ou seja, ele vai SUBTRAIR um numero depois de imprimir!!!
    //! (***) --- Linha 22
    printf("%i\n", d);


}

//! https://www.youtube.com/watch?v=mTVnu1_xuyY&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4&index=33
//! http://linguagemc.com.br/operadores-de-auto-incremento-e-auto-decremento/
