#include <stdio.h>
#include <locale.h>
#define TERCEIRA 8 // Com essa defini��o de constante, o programa n�o ocupa espa�o na mem�ria para armazenar o seu valor. N�o � poss�vel indicar o TIPO da constante (int, float, double...)

// Nomes de vari�veis = letras min�sculas
// Nomes de constantes = letras mai�sculas

void main(){
    int VARIAVEL = 8;
    VARIAVEL = 225;
    printf("%d\n", VARIAVEL);

    const int CONSTANTE = 21; // Utiliza espa�o na mem�ria e � poss�vel indicar o seu tipo.
    printf("%d\n", CONSTANTE);
    printf("%d\n", TERCEIRA);
}
