#include <stdio.h>
int er (int);
int main (int argc, const char *argv[])
{
  int k;
  printf ("please input :");
  scanf ("%d", &k);
  er (k);
  return 0;
}
int er (int k)
{
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
