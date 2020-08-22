 #include <stdio.h>
 #include <stdlib.h>
#include <ctype.h>
 int main ()
{

    char c;
    printf("Digite um caracter em letra minuscula: ");
    scanf("%c", &c);

    if (c >= 'w');  
    {
        printf("\nSegue a letra que você digitou, em maiusculo:  %c\n", 
                        toupper(c));
    }

    // A função (toupper) deixa a letra em maisculo
    //if "se"
    //http://excript.com/linguagem-c/tomada-decisao-c.html
    //https://www.youtube.com/watch?v=zGLRqYDbMaI
    



return 0;

}