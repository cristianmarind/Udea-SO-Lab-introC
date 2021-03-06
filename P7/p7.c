#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()
#include <stdbool.h>


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);

int main (void) {
    srand(time(NULL)); //genera la semilla
    int min, max, x, y;
    bool isEnd = false;
    bool correct = true;
    min = 0;
    max = 9;
    printf("\n\nSi desea salir presione CTRL+C \n\n\n");
    while (!isEnd)
    {
      char menu;
      int res = 0;
      if (correct)
      {
        x = generar_aleatorios(min, max);
        y = generar_aleatorios(min, max);
      }
      printf("Cuanto es %d veces %d? \n", x, y);
      scanf("%d", &res);
      if (res == x*y)
      {
        correct = true;
        printf("Muy bien!\n\n");
      }else{
        correct = false;
        printf("No. Por favor intenta nuevamente\n");
      }
    }
    return 0;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}