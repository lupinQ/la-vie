#include <stdio.h>
typedef struct gps{
    char a;
    int i;
    short b;
    int c;
}GPS;
int main(int argc, const char *argv[])
{
    GPS test;
    char *p = (char *)&test;
    int i,size = sizeof(GPS);
    
    test.a = 0x11;
    test.i = 0x55443322;
    test.b = 0x7766;
    test.c = 0xbbaa9988;
    
    for(i=0;i<size;i++){
    printf("\t0x%x\n",*(p+i));
    }
    
    return 0;
}
