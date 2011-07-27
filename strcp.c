#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    char a[20]="abcdefg";
    strcpy(a+3,a);
    printf("%s\n",a);
    return 0;
}
