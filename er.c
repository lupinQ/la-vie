#include <stdio.h>
int er (int);
int
main (int argc, const char *argv[])
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
 
  if (k<0)
    for (i = 31; i >= 0; i--)
      {
	m = ((k >> i) & 1);
	printf ("%d", m);
      }
  else if(k>0){
  while(i>=0)
  if(m =((k >> (--i)) & 1))
    {
      for (; i >= 0; i--)
	{
	  m = ((k >> i) & 1);
	  printf ("%d", m);
	}
    
    }}
else if(k==0)
printf("%d\n",k);
  return 0;



}
