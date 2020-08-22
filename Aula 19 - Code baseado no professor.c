#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, jovem, idoso;
    idade = 0;
    jovem = 18;
    idoso = 60;

    printf("\t\t\tSeja bem vindo ao programa!!!\n");
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade <= jovem)
    {
        printf("A sua faixa etaria eh de um jovem!!!");
    }else
    {
        if ((idade > jovem) && (idade < idoso))
        {
            printf("A sua faixa etaria eh de um adulto!!!");
        }else
        {
            if (idade >= idoso)
            {
                printf("A sua faixa etaria eh de um idoso!!!");
            }
            
        }
        
        
    }
    return 0;
}