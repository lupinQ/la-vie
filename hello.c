#include <stdio.h>
int strlen(const char *a){
 int i;
 for(i=0;a[i]!=0;i++);
 return i;
     
}
int main(int argc, const char *argv[])
{
    int n;
    char a[6]="hello";
    n=strlen(a);
    printf("%d",n);
    return 0;
}

