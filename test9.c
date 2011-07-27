#include <stdio.h>
#include <stdlib.h>
/*int main(int argc, const char *argv[])
{
    char *p = NULL;
    short nMemSize = 0;
    int n=1024;
    p = (char *)malloc(n);
    nMemSize = sizeof(*p)*n;
    printf("%d\n",nMemSize);
    return 0;
}*/
#if 0
int Func(char *);
int main(){

    char str[] = "Hello";
    char *p = str;
    int i = 10;
    printf("%d\t%d\n",sizeof(str),Func(str)); 
}

int Func(char str[100]){
    int i = sizeof(str);
    return i;
}
#else
int main(){
    unsigned int a = 6;
    int b = -20;
    unsigned c = 0;
    printf("%u\t%d\n",a+b,a+b);
    (a+b>6)?puts(">6"):puts("<=6");
    c = a+b;
    printf("c=%d\n",c);
    }
#endif
