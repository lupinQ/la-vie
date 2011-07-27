#include <stdio.h>
#include <string.h>
int
email (const char *str)
{
  int i = 0, j = 0, m = 0, flag=0,n;

  while (str[i])
    {
      j = 0;
      m = 0;
      if (str[i] == '@')
	{
	  j = 1;
	  m = 1;

	  if (i != 0)
	    if ((str[i - 1] != '@') && (str[i + 1] != '@'))
	      {
		while (((str[i - j] <= 'z') && (str[i - j] >= 'a'))
		       || ((str[i - j] <= 'Z') && (str[i - j] >= 'A'))
		       || (str[i - j] == '.') || (str[i - j] == '_')
		       || ((str[i - j] <= '9') && (str[i - j] >= '0')))
		  j++;
          if(str[i-j]=='@')flag++;
		while (((str[i + m] <= 'z') && (str[i + m] >= 'a'))
		       || ((str[i + m] <= 'Z') && (str[i + m] >= 'A'))
		       || (str[i + m] == '.') || (str[i + m] == '_')
		       || ((str[i + m] <= '9') && (str[i + m] >= '0')))
		  m++;
		if ((j <= 33) && (m <= 65) && (j > 1) && (m > 1) && (flag%2==0))
		  {
		    printf ("name:");
		    for (n = 1; n < j + m; n++)
		      printf ("%c", str[i - j + n]);
		    printf ("\n");
		  }
	      }
	}
      i++;
    }
  return 0;

}

int main (int argc, const char *argv[])
{
  FILE *fp = fopen (argv[1], "r");
  if (!fp)
    {
      printf ("文件不存在！");
      return 0;
    }
  while (!feof (fp))
    {

      char str[1024] = { 0 };
      fgets (str, sizeof (str), fp);
      email (str);

    }
  if (!fp)
    fclose (fp);

  return 0;
}
