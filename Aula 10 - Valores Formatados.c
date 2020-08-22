#include <stdio.h>

int main() 
{
    //printf("%_tipo_de_saida", valor_da_var);
    //printf("%tipo_1 %tipo_2", var1, var2);
/*
    int a = 11123;
    printf("%i\n", a);

    float f = 2.2;
    printf("%f", f);
*/
    //integer (int) --- %i ou %d
    //float e double --- %f
    //char --- %c 
    //string --- %s

    // %u --- Modulo de um numero
    // %p --- endereço de memoria
    // %e ou %E --- imprimir valores com notação cientifica
    // %% --- para imprimir SOMENTE UM SINAL DE PORCETAGEM

    int x = 10;
    printf("%i\n", x);

    float ff = 4.12;
    printf("%f\n", ff);

    printf("%i e %f", x, ff);

    return 0;
}