#include <stdio.h>
void tran(int *, int *);
int main(int argc, const char *argv[])
{
    int x=3,y=4;
    int *p=&x,*q=&y;
    printf("x=%d,y=%d",x,y);
    tran(p,q);
    printf("x=%d,y=%d",x,y);
    return 0;
}

void tran(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;

}
