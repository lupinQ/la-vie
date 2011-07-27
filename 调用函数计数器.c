#include <stdio.h>
static int Inti();
int main(int argc, const char *argv[])
{
    int k;
    for(k=0;k<5;k++)
    {
     printf("%d\n",Inti());
    }
    return 0;
}

static int Inti(){
   static int i=0;
   i++;
   return i;
}
