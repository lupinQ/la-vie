#include <stdio.h>
int d2b()
{
  int k;
  printf ("please input :");
  scanf ("%d", &k);

  int i = 31, m, flag = 0;
  for (i = 31; i >= 0; i--)
    {
      m = ((k >> i) & 1);
      if (m)
	flag = 1;
      if (flag == 1)
	printf ("%d", m);
    }
  return 0;
}
