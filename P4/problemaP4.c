#include <stdio.h>
#include <math.h>



int main()
{

    int x = 0;
    int n = 0;

    printf("Introduzca el primer numero: ");
    scanf("%d", &x);

    printf("Introduzca el primer numero: ");
    scanf("%d", &n);

    int resultado = 0;
   for(int y  = 0; y<=n; y++){
         resultado = resultado + pow(x, y);
   }
   printf("el numero resultante de la multiplicacion es: %d", resultado);
        printf("\n");

    
}


