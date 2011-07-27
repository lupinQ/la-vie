#include <stdio.h>
int chengfa(int ,int );
int main(int argc, const char *argv[])
{
    int i,j;
    printf("please input the i,j:");
    scanf("%d,%d",&i,&j);
    printf("%d,%d\n",i,j);
    chengfa(i,j);

    return 0;
}
int chengfa(int i,int j){
    int xi,xj,n,result,flag;
    result=0;flag=0;
    if((i>>31)&1)xi=~(i-1);else xi=i; 
    if((j>>31)&1)xj=~(j-1);else xj=j;
    if(((i>>31)&1)^((j>>31)&1))flag=1;
    for(n=0;n<31;n++)
    {
      if((xi>>n)&1)result=result+(xj<<n);
      
    }
    if (flag) result=~result+1;
    printf("i*j=%d\n",result);
    return 0;

    }
