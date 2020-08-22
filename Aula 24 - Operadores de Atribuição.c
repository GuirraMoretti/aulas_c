#include <stdio.h>
#include <stdlib.h>

/*

int x = 10;
x += 5;
No código acima, estamos declarando uma variável de nome x e a esta estamos atribuindo o valor 10. Em seguida, dizemos que a variável x deve receber o valor dela mesma, mais 5.
Isso acontece porque estamos dizendo que: x é mais igual a 5. Logo, pega-se o valor que a variável 5 possui e a esta incremente 5 unidades.

*/

int main()
{
    int x  = 0;

    while(x < 11){
        printf("msg\n");
        x += 1;
    }

    /*

        1) += -> soma
        2) -= -> subtração
        3) *= -> multiplicação
        4) /= -> divisão
        5) %= -> resto da divisão

    */

    int i = 50;
    printf("soma: %i\n", i+=100);
    printf("subracao: %i\n", i-=50);
    printf("multiplicacao: %i\n", i*=3);
    printf("divisão: %i\n", i/=3);
    printf("resto: %i\n", i%=3);


    return 0;
}

//? https://www.youtube.com/watch?v=9cQ57EZDcIc&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4
//? http://excript.com/linguagem-c/operador-atribuicao-c.html