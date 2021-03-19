#include <stdio.h>

#define N_ROW 5
#define N_COL 5

// Write a program that reads a 5x5 array of ints and prints row/col sums
int main(void)
{
  int mat[N_ROW][N_COL];
  int rowSums[N_ROW];
  int colSums[N_COL];
  int rowSum, colSum;

  // Populate matrix with user input
  for (int i = 0; i < N_ROW; i++) {
    printf("Enter row %d: ", i + 1);
    for (int j = 0; j < N_COL; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  // Calculate row and column sums
  for (int i = 0; i < N_ROW; i++) {
    rowSum = 0;
    colSum = 0;
    for (int j = 0; j < N_COL; j++) {
      rowSum += mat[i][j];
      colSum += mat[j][i];
    }
    rowSums[i] = rowSum;
    colSums[i] = colSum;
  }

  printf("Row totals: ");
  for (int i = 0; i < N_ROW; i++)
    printf("%d ", rowSums[i]);
  
  printf("\nColumn totals: ");
  for (int i = 0; i < N_COL; i++)
    printf("%d ", colSums[i]);
  printf("\n");
  
  return 0;
}