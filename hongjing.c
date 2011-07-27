#include <stdio.h>
#define PRINT_INT(x) printf(#x"=%d\n",x);
int main(int argc, const char *argv[])
{
    PRINT_INT(3+5)
    return 0;
}
