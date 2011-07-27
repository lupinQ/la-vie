#include <stdio.h>
char *datagr(){
    char a[]="hello";
    return a;
}
char *datap(){
    char *p="hello";
    return p;
}
int main(int argc, const char *argv[])
{
    printf("1. %s\n",datagr());
    char *q=datagr();
    char *p="Hello";

    printf("2. %s\n",q);
    return 0;
}
