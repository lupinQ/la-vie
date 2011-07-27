#include <stdio.h>
char *strcpy(char *dest, const char *src){
int i,j,n;
for(j=0;src[j];j++);
for(i=0;dest[i];i++);
for(n=0;n<j;n++)
dest[i++]=src[n];
return 0;
}
int main(int argc, const char *argv[])
{
    char dest[]="hello";
    char src[]="world";
    strcpy(dest,src);
    printf("%s\n",dest);
    return 0;
}
