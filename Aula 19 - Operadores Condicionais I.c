#include <stdlib.h>
#include <stdio.h>

/*          *OBSERVAÇÃO*
    Esse codigo foi tentativa de fazer antes de ver a aula, ou seja o codigo não esta exatamente igual da aula.
    A unica mudança é que no ultimo bloco do "IF" na linha 36, invés de, usar o else, utilizei o IF.
    Diferença: https://prnt.sc/tf23om (Codigo que fiz) ---> https://prnt.sc/tf245b (Codigo da aula)
*/

int main()
{
    //Variaveis
    int idade, jovem, idoso;
    idade = 0;
    jovem = 18;
    idoso = 60;

    //Informações
    printf("\t\t\tQual e a sua faixa etaria?\n");
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    //Aplicação das informações
    if (idade <= jovem)
    {
        printf("Sua faixa etaria eh de um jovem.\n");
    }
    else
    {
        if ((idade > jovem) && (idade < idoso))
        {
            printf("Sua faixa etaria eh de um adulto.\n");
        }
    }
    if (idade >= idoso)
    {
        printf("Sua faixa etaria e de um idoso.\n");
    }
    system("pause");
    return 0;
}

/*      *TENTANDO EXPLICAR O CODIGO*
            Se a idade da pessoa for MENOR ou IUAL a do JOVEM, digite isso. 
                Se não, faça isso:
                    Se a idade da pessoa for MAIOR que a do JOVEM e MENOR que a do IDOSO, digite isso.
                        Se a idade da pessoa for MAIOR ou IGUAL do IDOSO, digite isso.
*/

/*          *OPERADORES RELACIONAIS*
    == --- igualdade
    != --- diferença
    > --- maior que
    < --- menor que
    >= --- maior ou igual a
    <= --- menor ou igual a
*/

//https://www.youtube.com/watch?v=JCH04XtyT5E
//http://excript.com/linguagem-c/operador-relacional-c.html