#include <stdio.h>

// Write a program that asks  the user to enter the numbers from 1 to 16
// in any order and then displays the numbers in a 4x4 arrangement followed 
// by the sums of the rows columns and diagonals
int main(void)
{
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

  printf("enter the numbers from 1 to 16 in any order: \n");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, 
                                            &e, &f, &g, &h, 
                                            &i, &j, &k, &l,
                                            &m, &n, &o, &p);

  printf("%2d %2d %2d %2d\n", a, b, c, d);
  printf("%2d %2d %2d %2d\n", e, f, g, h);
  printf("%2d %2d %2d %2d\n", i, j, k, l);
  printf("%2d %2d %2d %2d\n", m, n, o, p);

  printf("Row sums: %d %d %d %d\n", (a + b + c + d), 
                                    (e + f + g + h),
                                    (i + j + k + l),
                                    (m + n + o + p));
  printf("Columns sums: %d %d %d %d\n", (a + e + i + m),
                                        (b + f + j + n),
                                        (c + g + k + o),
                                        (d + h + l + p));
  printf("Diagonal sums: %d %d", (a + f + k + p),
                                  (m + j + g + d));

 return 0;
}
