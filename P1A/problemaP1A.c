#include <stdio.h>

int main() {

int resultado = 0;
int valorUsuario;

printf("Introduzca una venta: ");
scanf("%d", &valorUsuario);

 if(valorUsuario  <= 20000 && valorUsuario > 0  ){
     resultado = valorUsuario *0.05;
    printf("el valor total es  %d" , resultado);
    printf("\n");
     return resultado;
 }else if(valorUsuario >= 50001)
 {
    resultado = (valorUsuario *0.10) + 3100 ;
    printf("el valor total es  %d" ,resultado);
    printf("\n");
    return resultado;
 }else if (valorUsuario >= 20001 && valorUsuario <= 50000)
 {
     resultado = (valorUsuario * 0.07) + 1000;
     printf("el valor total es %d" ,resultado);
     printf("\n");
     return resultado;
 }
 else if(valorUsuario < 0 )
 {
     printf("Valor invalido");
     printf("\n");
     return 0;
 }
 

}