#include <stdio.h>

int main(int argc, const char *argv[])
{
    int aa;
    int (*a)[10]=&aa;
    int *b;
    b=a;
    a++;
    printf("%p %p",b,a);
    return 0;
}
