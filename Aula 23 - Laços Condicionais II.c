#include <stdio.h>
#include <stdlib.h>

//  ==========                 ==========
//  ========== www.eXcript.com ==========
//  ==========                 ==========

int main()
{
    int x               = 0;
    int valDigitado     = 0;

    printf("Informe a qnt de X que vc deseja repetir a instrução:\n");
    scanf( "%i", &valDigitado );

    while(x < valDigitado){
        printf("%i\n", x * 10);
        x = x + 1;
    }


    return 0;
}

//? https://www.youtube.com/watch?v=Dq70e_kBTtk&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4
//? http://excript.com/linguagem-c/estrutura-repeticao-while-c-parte2.html


