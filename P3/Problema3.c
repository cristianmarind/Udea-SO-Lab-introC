#include <stdio.h>

int multiplo(int Numero1, int Numero2);

int main()
{

    int Numero1 = 0;
    int Numero2 = 0;

    printf("Introduzca el primer numero: ");
    scanf("%d", &Numero1);

    printf("Introduzca el primer numero: ");
    scanf("%d", &Numero2);

    multiplo(Numero1, Numero2);
}

int multiplo(int Numero1, int Numero2)
{
    int resto = Numero1 % Numero2;
    if (resto == 0)
    {
        printf("el numero %d  es multiplo de %d  con retorno %d", Numero1, Numero2, 1);
        printf("\n");
        return 0;
    }
    else
    {
        printf("el numero %d NO es multiplo de %d con retorno %d", Numero1, Numero2, 0);
        printf("\n");
        return 0;
    }
}