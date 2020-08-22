#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    
    //  printf("\n\t%i\n", i!=1);
    printf("\n\t%i\n", !(i==1));
/*
    ! = é um sinal de negação, igual a expressão NOT. E também indica que você quer o oposto da informação.
        Ex: printf("%i", (1==1) ); --- CORRETO, 1 É IGUAL A 1
            printf("%i", !(1==1)); --- Correto, PORÉM, a Exclamação que antecede "> ! <(1==1)" faz com que o codigo de a informação inversa.
*/

    return 0;
}

/*     

    1) Se for VERDADE, irá aparecer 1
    2) Se for FALSO, irá aparecer 0

( == ) dois sinais de igual é utilizado para verificar a igualdade entre o operando a esquerda com o operando a direita.
    Ex: 5==5 (Correto) 5 é o mesmo numero que 5, ou seja, igual;
        5==10 (Falso) 5 é diferente de 10, ou seja, falso;


( != ) uma exclamação e um sinal de igual,  significa a diferença. Ele vai questionar se o operando da esqueda é diferente da direita.
    Ex: 5!=5 (FALSO) 5 É IGUAL A 5, ou seja, falso;
        5!=6 (Verdadeiro) 5 É DIFERENTE DE 6, ou seja, verdadeiro;

*/
