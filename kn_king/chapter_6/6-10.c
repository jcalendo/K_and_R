#include <stdio.h>
#include <stdbool.h>


// Find the earliest date from user supplied dates
int main(void)
{
  int mm, dd, yy, mm2, dd2, yy2;


  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy); 
 
  if (mm == 0 || dd == 0 || yy == 0)
      return 0;

  while(true)
  {    
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if (yy2 == 0 || mm2 == 0 || dd2 == 0)
      break;

    if (yy2 < yy) {
      yy = yy2;
      mm = mm2;
      dd = dd2;
    } else if (yy2 == yy && mm2 < mm) {
      yy = yy2;
      mm = mm2;
      dd = dd2;
    } else if (yy2 == yy && mm2 == mm && dd2 < dd) {
      yy = yy2;
      mm = mm2;
      dd = dd2;
    }
  }

  printf("%02d/%02d/%02d is the earliest date\n", mm, dd, yy);
  
  return 0;
}