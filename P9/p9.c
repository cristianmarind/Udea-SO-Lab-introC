#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()
#include <stdbool.h>


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
char * getCorrectAnswer();
char * getIncorrectAnswer();
void closeProgram(int correctCount, int incorrectCount);

int main (void) {
    srand(time(NULL)); //genera la semilla
    int min, max, x, y, correctCount = 0, incorrectCount = 0;
    bool isEnd = false;
    bool correct = true;
    min = 0;
    max = 9;
    printf("\n\nSi desea salir presione CTRL+C \n\n\n");
    do
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
        char * msg;
        correct = true;
        correctCount++;
        msg = getCorrectAnswer();
        printf("%s \n\n", msg);
      }else{
        char * msg;
        correct = false;
        incorrectCount++;
        msg = getIncorrectAnswer();
        printf("%s \n\n", msg);
      }
      printf("\n\n Desea continuar? SI(1)  /  NO(0)\n");
      scanf("%d", &res);
      if (res == 0)
      {
        isEnd = true;
      }
    }while (!isEnd);
    closeProgram(correctCount, incorrectCount);
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

char * getCorrectAnswer(){
  static char correctAnswers [4][30] = {
    "Muy bien!",
    "Excelente!",
    "Buen trabajo!",
    "Sigue haciendolo bien!"
  };
  int indexAnswer = generar_aleatorios(0, 3);
  return correctAnswers[indexAnswer];
}

char * getIncorrectAnswer(){
  static char incorrectAnswers [4][40] = {
    "No. Por favor trata de nuevo.",
    "Incorrecto. Trata una vez mas.",
    "No te rindas!",
    "No. Trata de nuevo"
  };
  int indexAnswer = generar_aleatorios(0, 3);
  return incorrectAnswers[indexAnswer];
}

void closeProgram(int correctCount, int incorrectCount){
  int x = correctCount*100/(correctCount+incorrectCount);
  if (x < 75)
  {
    printf("Por favor pidele ayuda al instructor");
  }
}