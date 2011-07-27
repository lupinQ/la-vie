#include <stdio.h>
#include <stdlib.h>
void maopao(int *a,int n){
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
 

}
int main()
{
    int i,n=100;
    int a[100]={0};
    for(i=0;i<n;i++)
     a[i]=rand()%100;
     maopao(a,n);
   for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
