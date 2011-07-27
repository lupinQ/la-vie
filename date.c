#include <stdio.h>

int
main (int argc, const char *argv[])
{
  int i, j, k, m, l = 0, n = 0;
  int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int b[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  printf ("please input the year,the month,the day:");
  scanf ("%d,%d,%d", &i, &j, &k);
  printf ("the year is %d,the month is %d,the day is %d\n", i, j, k);
  if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
    if (k <= b[j - 1])
      for (m = 0; m < j - 1; m++)
	n = n + b[m];
    else
      l++;
  else if (k <= a[j - 1])
    for (m = 0; m < j - 1; m++)
      n = n + a[m];
  else
    l++;
  if (l == 0)
    {
      n = n + k;
      printf ("the day is the %dth day of the year.\n", n);
    }
  else
    printf ("the day is illegal!\n");
  return 0;
}
