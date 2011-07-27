#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int a[1000]={0};
    int b[10]={0};
    for(i=0;i<1000;i++)
     a[i]=rand()%10;
    for(i=0;i<1000;i++)
     {
      j=a[i];
      b[j]=b[j]+1;
     }   
    for(i=0;i<10;i++)
    printf("%d的个数为%d\n ",i,b[i]);
    return 0;
}
