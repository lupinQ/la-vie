
#include <stdio.h>
char *strch(const char *s,char c){
    int i;
    char *p=s;
    for(i=0;p[i];i++) if(p[i]==c)return &p[i]; 
    return NULL;
}
int main(int argc, const char *argv[])
{
    char s[10]={'a','b','c','d','e','f','g','\0'};
    printf("please input the char:");
    char c=getchar();
    char *q=strch(s,c);
    if(q)
    printf("%p\n",q);
    else 
    printf("未找到符合字符！");
    return 0;
}
