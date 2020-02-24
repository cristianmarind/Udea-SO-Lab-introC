#include <stdio.h>
#include <math.h>

int main()
{

    int x = 0;
    int n = 0;

    printf("Valor de entrada: ");
    scanf("%d", &x);

    printf("Numero de terminos: ");
    scanf("%d", &n);

    float resultado = 1;
    float potencia;
    float factorial = 2;
    float termino;
    float ResultadoF = 1;
    int z = 2;

    for (int y = 0; y < n-1; y++)
    {
        potencia = pow(x, z);        
        factorial = z;
        while (factorial > 1)
        {
            ResultadoF *= factorial;            
            factorial--;
        }        
        
        termino = potencia / ResultadoF;
        if (y%2 == 0)
        {
             resultado = resultado - termino;
        }else
        {
            resultado = resultado + termino;
        }
        ResultadoF = 1;
        z = z + 2;
    }
    printf("suma de la serie: %f", resultado);
    printf("\n");
}