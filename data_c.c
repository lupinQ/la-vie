#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i,j,k,m;
    printf("请输入需要判断的年，月，日：");
    scanf("%d,%d,%d",&m,&i,&j);
    printf("需要判断的日期为%d年,%d月,%d日\n",m,i,j);
    switch(i)
    {
    case 1:k=j;break;
    case 2:k=j+31;break;
    case 3:k=j+28+31;break;
    case 4:k=j+31+28+31;break;
    case 5:k=j+31+28+31+30;break;
    case 6:k=j+31+28+31+30+31;break;
    case 7:k=j+31+28+31+30+31+30;break;
    case 8:k=j+31+28+31+30+31+30+31;break;
    case 9:k=j+31+28+31+30+31+30+31+31;break;
    case 10:k=j+31+28+31+30+31+30+31+31+30;break;
    case 11:k=j+31+28+31+30+31+30+31+31+30+31;break;
    case 12:k=j+31+28+31+30+31+30+31+31+30+31+30;break;
    }
    if(m%4==0 && m%100!=0 || m%400==0)
    k=k+1;
    printf("输入日期为一年的第%d天",k);
    return 0;
}
