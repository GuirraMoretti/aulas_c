#include <stdio.h>
#include <stdlib.h>

//!          EXPLICAÇÃO

/*
    O switch é uma forma de reduzir a complexidade de vários if … else encadeados.
    É muito utilizado, principalmente para uso em estruturas de menu.
    O conteúdo de uma variável é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.

Comandos utilizados: switch, case, default e break
? Switch/case: Diante de uma condição ele seleciona o que será feito.
? Default: O comando default executa uma linha, caso nenhuma das alternativas anteriores seja verdadeira.
? Break: A instrução break termina a execução do switch e o programa continua a executar na instrução seguinte. 
?        O uso do break evita testar as demais alternativas de forma desnecessária quando uma opção verdadeira já foi encontrada.

!            Pseudocódigo
? Escolha = switch
* Caso = case


Escolha (Variável)
Inicio
   Caso (Valor1):       //! Caso a intrução for correta; Execute as intruções.
      Instruções;       //! Execute as instruções.
        break;          //! Vá para o proximo BLOCO (não linha) de instruções.
   Caso (Valor2): 
     Instruções;
   
   Caso (Valor3): 
     Instruções;
Fim;

*/

void main()
{

    printf("Digite um valor entre 0 e 9: ");
    int i;
    scanf("%i", &i);

    switch(i)
{
    case 0:
        printf("A opção digitada foi 'zero' ");
        break;
    case 1:
        printf("A opção digitada foi 'um'");
        break;
    case 2:
        printf("A opção digitada foi 'dois'");
        break;
    case 3:
        printf("A opção digitada foi 'tres'");
        break;
    case 4:
        printf("A opção digitada foi 'quatro'");
        break;
    case 5:
        printf("A opção digitada foi 'cinco'");
        break;
    case 6:
        printf("A opção digitada foi 'seis'");
        break;
    case 7:
        printf("A opção digitada foi 'sete'");
        break;
    case 8:
        printf("A opção digitada foi 'oite'");
        break;
    case 9:
        printf("A opção digitada foi 'nove'");
        break;
    default:
        printf("Opção default.");
    }
}


//! http://linguagemc.com.br/o-comando-switch-case-em-c/
//! https://www.youtube.com/watch?v=uju8XDbgonY&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4&index=31
//! http://excript.com/linguagem-c/estrutura-selecao-multipla-c.html
