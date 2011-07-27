#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i,a[5]={0},b[5]={1,2,3,4,5};
    for(i=0;i<4;i+=2)
    {
    a[i]=b[i];
    a[i+1]=b[i+1];
    }
    a[i]=b[i];
    return 0;
}
