#include <stdio.h>
#include <stdlib.h>

/* O que é um laço de repetição? Laço de repetição, laços condicionais, iteradores, são instruções que repetem um mesmo bloco de instruções por um determinado número de vezes 
ou então, até que uma condição seja verificada, por exemplo:

while(True)
{
    Linha do codigo
}
Na instrução acima, estamos dizendo que um determinado bloco deve ser executado enquanto a condição, definida no cabeçalho do laço, seja verdadeiro.
*/

void main()
{

    int i = 1;

    while(i<=10)
    {
        printf("%i\n", i);
        i = (i + 1);
    }
}

//? https://www.youtube.com/watch?v=7oxEp6Pc0tk&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4
//? http://excript.com/linguagem-c/estrutura-repeticao-while-c.html