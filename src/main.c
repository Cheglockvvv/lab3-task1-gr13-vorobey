/* main.c */
#include <stdio.h>

void main (void)
{
  int n;
  printf("Enter size of an array");
  scanf("%d", &n);
	int* array = (int*) malloc(n * sizeof(int));

  srand(0);

  free(array);
}
