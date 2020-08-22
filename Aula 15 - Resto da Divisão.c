#include <stdio.h>
#include <stdlib.h>

int main ()
{

    printf("%i\n", 3 % 2);
    printf("%i\n", 4 % 2);  
    printf("%i\n", 5 % 2); 
    printf("%i\n", 6 % 2); 
    printf("%i\n", 11 % 3); 
     
    return 0; 

}

/*
Como obter o módulo (resto) da divisão? Módulo da divisão ou então, resto da divisão corresponde a parte "que sobrou" da divisão entre 2 operadores. 
Igual na matemática, o módulo da divisão é uma propriedade que pode ser utilizada para obtenção e verificação de outras propriedades. 
Assim, ainda que seja um tema simples, é muito importante e economiza diversas linhas de programação quando fazemos uso corretamente.
Por exemplo, como que podemos saber se um número é ou não par? Há diversas maneiras, das mais simples à mais complexas, que utilizam uma única linha de código como também, que fazem uso de dezenas para a resolução desse problema.
No entanto, um número par, SEMPRE terá resto da divisão igual a zero e assim, para conseguirmos saber rapidamente se um número é ou não par, basta somente extrair o módulo entre o número e 2.
Assim, nós temos que um número é par quando o módulo da divisão é igual a zero.

Como podemos saber se um número é redondo, ou seja, 100, 200, 300? 
Para isso, dividimos o número por 100 e o resultado será igual a um caso o número seja redondo e menor do que 1000 e maior do que zero. 
Ou seja, essa é mais uma situação onde podemos utilizar essa propriedade matemática.


https://www.youtube.com/watch?v=zTG2wcXbAr4
*/