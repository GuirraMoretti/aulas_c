#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    float num1, num2, resultado;
    int x = 0;
    char op = 0;
    num1 = num2 = resultado = 0;
    do
    {
        system("clear");
        printf("\tCalculadora decente 1.0\n");
        printf("\t(0) sair\n");
        printf("\t(1) soma\n");
        printf("\t(2) subtrair\n");
        printf("\t(3) multiplicação\n");
        printf("\t(4) divisão\n");


        printf("Digite a opção que quer usar: \n\t");
        op = getchar();
        

        if (op == '1')
        {
            printf("Digite o primeiro numero que deseja somar: ");
            scanf("%f", &num1);

            printf("\nDigite o segundo sumero que deseja somar: ");
            scanf("%f", &num2);

            resultado = num1 + num2;

            printf("\nResultado = %.2f\n", resultado);
        }if (op == '2')
        {
            printf("Digite o minuendo: ");
            scanf("%f", &num1);

            printf("Digite o diminuendo: ");
            scanf("%f", &num2);

            resultado = num1 - num2;

            printf("O resto/diferença é: %.2f\n", resultado);

        }if (op == '3')
        {
            printf("Digite o multiplicador: ");
            scanf("%f", &num1);

            printf("Digite o multiplicando: ");
            scanf("%f", &num2);

            resultado = num1 * num2;

            printf("O produto é: %.2f\n", resultado);

        }if (op == '4')
        {
            printf("Digite o dividendo: ");
            scanf("%f", &num1);

            printf("Digite o dividor: ");
            scanf("%f", &num2);

            resultado = num1 / num2;

            printf("O resto é: %.2f\n", resultado);

        }else
        {
            return 0;
        }
        
        
        


        printf("\nDeseja continuar?\nSe sim, digite 1, se não digite 0\n");
        scanf("%i", &x);

    } while (x == 1);
    printf("\nObrigado por utilizar essa calculadora!!!");
    
}

//? https://www.youtube.com/watch?v=_CF4sUB6fqA&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4&index=28
//? https://www.youtube.com/watch?v=EHAnvmwo218&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4&index=29
