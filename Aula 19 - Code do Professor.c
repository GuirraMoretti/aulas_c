#include <stdio.h>
#include <stdlib.h>

//  ==========                 ==========
//  ========== www.eXcript.com ==========
//  ==========                 ==========

int main()
{
    int iJ, iI;
    iJ = 18;
    iI = 60;

    int idade = 0;

    printf("Digite a idade de um pessoa:\n");
    scanf( "%i", &idade );

    if(idade <= iJ)
    {
        printf("\nA idade informada eh de um jovem.\n")   ;
    }else{
        if(idade >= iI){
            printf( "\nA idade informada é de uma pessoa idosa.\n" );
        }else{
            if( (idade > iJ)&&(idade < iI) ){
                //se isso for V ou se isso for V

                //A meia-idade se caracteriza por qualquer pessoa que tenha
                //menos de 60 anos e mais de 17
                printf("A idade informada é de uma pessoa de meia-idade.");
            }
        }
    }


    return 0;
}