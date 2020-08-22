#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//!                     Links                  
//? http://linguagemc.com.br/comando-do-while/
//? https://www.youtube.com/watch?reload=9&v=1TcBY8aU-DE&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4&index=27
//? http://excript.com/linguagem-c/estrutura-repeticao-do-while-c.html


/*
O laço de repetição do-while funciona de maneira semelhante ao laço de repetição "while".
A diferença entre os dois é que o laço "while" só executa o bloco caso a condição seja verdadeira, enquanto que o laço de repetição do-while, ira primeiro
executar o bloco de repetição e somente em seguida, irá verificar se a condição é ou não verdadeira.

*/
//! Pseudocodigo
/*
faça
{
}enquanto( true );
*/

void main()
{
char c;
int contador = 0;
do
{
    contador += 1;
    printf("Digite 0 para sair do looping\n");
    printf("Quantas vezes foi executado o looping: %i\n",contador);
    c = getchar();
    

}while (c!='0');

}
