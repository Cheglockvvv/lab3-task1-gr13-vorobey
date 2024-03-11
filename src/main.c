/* main.c */
#include <stdio.h>

int findMaxSum(int arr[], int n) {
  int maxSum = 0;
  int amountOfNumbers = 1;
  int* maxNumbers = (int*) malloc(amountOfNumbers * sizeof(n));
  

  
  return maxSum;
}

int main (void)
{
  int n;
  printf("Enter size of an array");
  scanf("%d", &n);
	int* array = (int*) malloc(n * sizeof(int));

  srand(0);
  for (int i = 0; i < n; i++) {
    array[i] = rand() % 100;
  }

  free(array);

  return 0;
}
