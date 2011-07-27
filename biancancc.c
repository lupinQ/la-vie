#include <stdio.h>
#include <stdarg.h>

void printlist (int begin, ...)
{
  va_list ap;
  char *p;

  va_start (ap, begin);
  p = va_arg (ap, char *);

  while (p)
    {
      fputs (p, stdout);
      putchar ('\n');
      p = va_arg (ap, char *);
    }
  va_end (ap);
}

int main (void)
{
  printlist (0, "hello", "world", "foo", "bar", NULL);
  return 0;
}
