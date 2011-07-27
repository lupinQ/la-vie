#include <stdio.h>
void say_hello(const char *str){
    printf("Hello %s\n",str);
}
int main(int argc, const char *argv[])
{
   typedef void (*f)(const char *);
   f g;
   g=say_hello;
    g("Mike");
    /*
     *typedef void f(const char *);
     *f *g;
     *g("Mike"); 
     */
    return 0;
}
