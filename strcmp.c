#include <stdio.h>
int strcmp(char * dest,char * src){
    int i,j,k;
    for(i=0;dest[i]||src[i];i++)
    { j=dest[i]-src[i];
      if(j>0)
    { k=1;break;}
    else if(j<0)
    { k=-1;break;}
      else if(j==0)
     k=0;}
    
    return k;
}
int main(int argc, const char *argv[])
{
   int n=0;
   char dest[]="hello";
        char src[]="helloworld";
           n=strcmp(dest,src);
           printf("%d",n);

    return 0;
}
