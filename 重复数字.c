#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,k,m,j=0;
    int a[20],b[10]={0};
    printf("请输入一个四位数\n");
    scanf("%d",&k);
    printf("输入四位数为：%d",k);
    for(i=0,m=1000;i<4;i++,m=m/10)
    {
    a[i]=k/m;
    k=k%m;
    }
    for(i=0;i<4;i++)
    {
    j=a[i];
    b[j]=b[j]+1;
    }
    for(i=0;i<10;i++)
    if(b[i]>1)
    printf("\n重复的数字为%d,重复个数为%d",i,b[i]);
    return 0;
}
