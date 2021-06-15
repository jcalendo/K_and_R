#include <stdio.h>

#define N_ROW 5
#define N_COL 5

// Modify 8-7 to read in 5 quiz grades per student
// Compute the total and average score for each student then
// compute the average, high score and low score for each quiz
int main(void)
{
  int mat[N_ROW][N_COL];
  float tot[N_ROW], avg[N_COL], grand_avg[N_COL], high[N_COL], low[N_COL];

  // Populate matrix with user input
  for (int i = 0; i < N_ROW; i++) {
    printf("Enter student %d: ", i + 1);
    for (int j = 0; j < N_COL; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  // compute per-student averages
  for (int i = 0; i < N_ROW; i++) {
    float total = 0.0;
    for (int j = 0; j < N_COL; j++) {
      total += mat[i][j];
    }
    tot[i] = total;
    avg[i] = total / N_COL;
  }

  // compute per-quiz average, high score and low scores
  for (int i = 0; i < N_ROW; i++) {
    float total = 0.0;
    int max = 0;
    int min = 100;
    for (int j = 0; j < N_COL; j++) {
      total += mat[j][i];
      if (mat[j][i] > max) {
        max = mat[j][i];
      }
      if (mat[j][i] < min) {
        min = mat[j][i];
      }
    }
    grand_avg[i] = total / N_ROW;
    high[i] = max;
    low[i] = min;
  }
  
  printf("Student Stats:\n");
  for (int i = 0; i < N_COL; i++) {
    printf("Student %d -- total: %.2f avg: %.2f\n", i, tot[i], avg[i]);
  }

  printf("Quiz Stats:\n");
  for (int i = 0; i < N_COL; i++) {
    printf("Quiz %d -- avg: %.2f high: %.2f low: %.2f\n", i, grand_avg[i], high[i], low[i]);
  }

  return 0;
}
