#include <stdio.h>
union aa{
struct bit{
unsigned int a:1;
unsigned int b:5;
unsigned int c:2;
}a;
char b[4];
}x1;
int main(int argc, const char *argv[])
{
    x1.a.a=1;
    x1.a.b=3;
    x1.a.c=1;
printf("%d %d %d %d %d %d %d %d ",sizeof(x1.a),x1.a.a,x1.a.b,x1.a.c,x1.b[0],x1.b[1],x1.b[2],x1.b[3]);
    return 0;
}
