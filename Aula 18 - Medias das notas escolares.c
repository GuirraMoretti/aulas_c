#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, soma, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("\t\t\t\tMedia aritmetica 1.0\n");
    printf("Digite a nota do primeiro bimestre: \n");
    scanf("%f", &nota1);
    printf("Digite a nota do segundo bimestre: \n");
    scanf("%f", &nota2);
    printf("Digite a nota do terceiro bimestre: \n");
    scanf("%f", &nota3);
    printf("Digite a nota do quarto bimestre: \n");
    scanf("%f", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    media = soma / 4;

    if (media>=6)
    {
        printf("Parabéns, sua nota foi maior que a media!\nSua nota foi: %.2f\n", media);
    }else
    {
        printf("Infelizmente sua nota foi menor que a media :'(\nSua nota foi: %.2f\n", media);
    }
    
    
    //printf("A media e igual: %.2f\n", media);
    system("pause");
    return 0;
}

