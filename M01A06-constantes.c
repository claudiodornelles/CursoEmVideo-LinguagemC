#include <stdio.h>
#include <locale.h>
#define TERCEIRA 8 // Com essa definição de constante, o programa não ocupa espaço na memória para armazenar o seu valor. Não é possível indicar o TIPO da constante (int, float, double...)

// Nomes de variáveis = letras minúsculas
// Nomes de constantes = letras maiúsculas

void main(){
    int VARIAVEL = 8;
    VARIAVEL = 225;
    printf("%d\n", VARIAVEL);

    const int CONSTANTE = 21; // Utiliza espaço na memória e é possível indicar o seu tipo.
    printf("%d\n", CONSTANTE);
    printf("%d\n", TERCEIRA);
}
