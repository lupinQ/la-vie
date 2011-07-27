#include <stdio.h>
#include "stdarg.h"
void myprintf(const char * format,...){
    va_list ap;
    char c;
    va_start(ap,format)/*format必须为...前紧跟的那一个*/;
    while (c=*format++) 
    {
        switch(c){
        case 'c':{
            char ch=va_arg(ap,int);
            putchar(ch);
            break;
        }
        case 's':{
            char *p=va_arg(ap,char*);
            fputs(p,stdout);
            break;
        }
        default:
            putchar(c);
        }
    }
    va_end(ap);
}
int main()
{
    myprintf("c\ts\n",'1',"hello");
    return 0;
}
