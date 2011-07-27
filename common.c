#include <stdio.h>
#include <string.h>

int common(){

   char ch;
   ch=getchar();
   while(getchar()!=EOF && getchar()!='\n')
   ch=getchar();
   return 0;
}
