#include <stdio.h>
const char *strch(const char *s,char c){
    int i;
 const char *p=NULL;
    for(i=0;s[i];i++)
    {
        if(s[i]==c)
       { 
        p=&s[i];
        break;
       }
    }
return p;
}
int main(int argc, const char *argv[])
{
    char s[10]={'a','b','c','d','e','f','g','\0'};
   printf("please input the char:");
  char c=getchar();
   const char *q=strch(s,c);
    if(q)
    printf("%p\n",q);
    else 
    printf("未找到符合字符！");
    return 0;
}
