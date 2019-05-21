#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "my_math.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\n P.A.: ");
    progAritmetica(5, 2, 2);
    printf("\n P.G.: ");
    progGeometrica(5, 2, 2);
    printf("\n 2.5^4 = %.2f\n", exponencial(2.5, 4));
    printf("\n 5! = ");
    fatorial(5);
    printf("\n Sequ�ncia de Fibonacci at� o 10o termo: ");
    fibonacci(10);
    printf("\n M.D.C(9, 12) = %d\n", mdc(9, 12));
    printf("\n M.M.C(9, 12) = %d\n", mmc(9, 12));
    printf("\n Divisores de 35: ");
    mostrar_divisores(35);
    printf("\n O n�mero 35 tem %d divisores.\n", contar_divisores(35));
    if (numero_primo(97))
    {
        printf("\n O n�mero 97 � primo.\n");
    }

    printf("\n\n\n**** Fim do programa ****");
    return 0;
}
