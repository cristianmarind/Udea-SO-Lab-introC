#include <stdio.h>
#include <string.h>

main()
{
  int rows;
  printf("Numero de renglones de la secuencia: ");
  scanf("%d", &rows);
  char prev [50] = "1";
  printf("\n");
  if (rows < 1)
  {
    return;
  }
  printf("%s\n", prev);
  for (int i = 1; i < rows; i++)
  {
    if (i % 2 == 0)
    {
      char aux [50] = "1";
      strcat(aux, prev);
      strcpy(prev, aux);
      printf("%s\n", prev);
    }
    else
    {
      char aux [50] = "0";
      strcat(aux, prev);
      strcpy(prev, aux);
      printf("%s\n", prev);
    }
  }
  return;
}