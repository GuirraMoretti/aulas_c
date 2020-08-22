#include <stdlib.h>
#include <stdio.h>

int main () 
{
    //scanf("tipo_de_entrada", &var_que_recebera );
    //scanf("%tipo1%tipo2", &var1, &var2);

    int var1, var2;
     printf("Por Favor, digite um numero: \n");
     scanf("%i", &var1 );
     printf("%i", var1);

     return 0;
}

/*
-----------------------------------------------------------------------------------------------------------------------------------------------
Basicamente o que eu entendi que o E comercial (&) antes da var ele recolhe a informação no scanf.
    Ex:  scanf("%i", &var1 );
        (& grava o que o usuario digitou na var indicada. No caso a var1)
-----------------------------------------------------------------------------------------------------------------------------------------------
Se não entendeu, de uma olhada nesses links
    http://linguagemc.com.br/operacoes-de-entrada-e-saida-de-dados-em-linguagem-c/
    https://www.youtube.com/watch?v=siSjWK65LuQ
*/

