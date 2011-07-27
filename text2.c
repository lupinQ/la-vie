#include <stdio.h>

int main(int argc, const char *argv[])
{
    union aa{
    int a;
    char b[4];
    }a1;
    a1.a=4;
    printf("%d %d",a1.b[3],a1.b[0]);
    return 0;
}
