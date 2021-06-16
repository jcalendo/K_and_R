#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10  // Grid size

// Write a program that generates a random walk across a 10x10 array
int main(void) {
  char letter, mat[N][N];
  int x, y, x2, y2, direction;

  // populate matrix with '.'
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      mat[i][j] = '.';
    }
  }

  // random walk
  srand((unsigned) time(NULL));
  letter = 'A';
  x = 0;
  y = 0;
  mat[x][y] = letter;

  while (letter < 'Z')
  {
    direction = rand() % 4;
    switch (direction)
    {
    case 0:
      x2 = x - 1;
      y2 = y;
      break;
    case 1:
      x2 = x + 1;
      y2 = y;
      break;
    case 2:
      x2 = x;
      y2 = y + 1;
      break;
    case 3:
      x2 = x;
      y2 = y - 1;
      break;
    default:
      break;
    }

    if ((x2 >= 0 && x2 < N) && (y2 >= 0 && y2 < N) && (mat[x2][y2] == '.'))
    {
      mat[x2][y2] = ++letter;
      x = x2;
      y = y2;
      // check if blocked
      if (mat[x-1][y] != '.' && mat[x+1][y] != '.' && mat[x][y+1] != '.' && mat[x][y-1] != '.')
      {
        break;
      }
    }
  }

  // Display final array
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%c ", mat[i][j]); 
    }
    printf("\n");
  }

  return 0;
}