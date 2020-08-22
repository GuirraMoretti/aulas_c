void main()
{

    printf("Digite um valor entre 0 e 9: ");
    int i;
    scanf("%i", &i);

    switch(i)
{
    case 0:
        printf("A opção digitada foi 'zero'\n");
    case 1:
        printf("A opção digitada foi 'um'\n");;
    case 2:
        printf("A opção digitada foi 'dois'\n");
    case 3:                                             //!     QUANDO NÃO TEM UM BREAK, O CODIGO IRA EXECUTAR A LINHA DE BAIXO ATE ACHAR UM BREAK
        printf("A opção digitada foi 'tres'\n");
    case 4:
        printf("A opção digitada foi 'quatro'\n");
    case 5:
        printf("A opção digitada foi 'cinco'\n");

                                                        //!     SE EU COLOCAR 4 DE INPUT, O COMPILADOR VAI ENTEDER QUE A PARTIR DO CASE 4 É PARA EXECUTAR AS LINHAS DE
                                                        //!     COMANDO. ELE EXECUTA O CASE 4,5 ATÉ O 6 ONDE TEM UM BREAK.
    case 6:
        printf("A opção digitada foi 'seis'");
        break;
/*
    case 7:
        printf("A opção digitada foi 'sete'");
        break;
    case 8:
        printf("A opção digitada foi 'oite'");
        break;
    case 9:
        printf("A opção digitada foi 'nove'");
        break;
*/
    default:                                            //! A OPÇÃO DEFAULT SO É EXECUTADA SE NENHUM DOS CASES ANTERIORES FOR VERDADEIRO. Tipo um ELSE para o IF.
        printf("Opção default.");
    }
}


//!         Professor se atrapalhou um pouco na video aula

//? https://www.youtube.com/watch?v=DHapI7U5bMM&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4&index=32
//? http://excript.com/linguagem-c/estrutura-selecao-multipla-c-parte2.html
//? http://linguagemc.com.br/o-comando-switch-case-em-c/
