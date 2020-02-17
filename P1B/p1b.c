#include <stdio.h>

main()
{
  int num;
  printf("Numero final (empezando de 1): ");
  scanf("%d", &num);
  printf("\n");
  printf("Tabla de multiplicación desde 1 hasta %d:", num);
  printf("\n \n");
  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= num; j++)
    {
      printf("%dx%d=%d, ", i, j, i*j);
    }
    printf("\n");
  }
  return 0;
}