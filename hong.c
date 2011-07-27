#include <stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
int main(int argc, const char *argv[])
{
   int x=3,y=5;
   printf("%d",MAX(x,y));
    return 0;
}
