#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    int i,j,k;
    j=0;
    k=0;
    int a[20]={0};
    int b[20]={0};
    for(i=0;i<20;i++)
     a[i]=rand()%100;
     for(i=0;i<19;i++)
     if(a[i]%2==1)
      b[j++]=a[i];
      else 
        b[19-k++]=a[i];
   for(i=0;i<20;i++)
   printf("%d\t",b[i]);
   return 0;
}
