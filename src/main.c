/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMaxSum(int arr[], int n) {
  int maxSum = 0;
  int amountOfNumbers = 1;
  int* digitSum = (int*) malloc(n * sizeof(n));

  for (int i = 0; i < n; i++) {
    int check = arr[i];
    int currentSum = 0;
    
    while (check > 0) {
      currentSum += check % 10;
      check /= 10;
    }

    digitSum[i] = currentSum;

    if (currentSum > maxSum) {
      maxSum = currentSum;
    }
  }

  for (int i = 0; i < n; i++) {
    if (digitSum[i] == maxSum) {
      printf("%d ", arr[i]);
    }
  }

  free(digitSum);
  return maxSum;
}

int main ()
{
  int n;
  printf("Enter size of an array\n\n");
  scanf("%d", &n);
	int* array = (int*) malloc(n * sizeof(int));

  srand(time(0));
  for (int i = 0; i < n; i++) {
    array[i] = rand() % 100;
    printf("%d ", array[i]);
  }

  int maxSum = findMaxSum(array, n);
  printf("\n%d\n", maxSum);
  
  free(array);
  return 0;
}
