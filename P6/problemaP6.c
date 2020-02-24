#include <stdio.h>
#include <stdlib.h>
int InvertirNum(int N)
{
  int Invertido=0, Resto;
      while(N!=0)
      {
          Resto=N%10;
          N=N/10;
          Invertido=Invertido*10+Resto;
       }
     return Invertido;
 }
int main()
{
    int N, Respuesta;
   printf("Ingrese el numero que desea invertir \n");
   scanf("%d", &N);
   Respuesta=InvertirNum(N);
   printf("El numero invertido es %d \n", Respuesta);
   
}