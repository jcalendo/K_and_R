#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define M 10  // Grid size dimensions
#define N 10

// Write a program that generates a random walk across a 10x10 array
int main(void) {
  char mat[M][N];
  char LETTERS[26] = {false};
  int direction;
  bool in_bounds = true, unassigned = true;

  // populate matrix with '.'
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      mat[i][j] = '.';
    }
  }

  // random walk
  srand((unsigned) time(NULL));
  mat[0][0] = 'A';
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      // Code for generating random walk
    }
  }

  // Display final array
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      printf("%c ", mat[i][j]); 
    }
    printf("\n");
  }

  return 0;
}