#include <stdio.h>

int main()
{
    int i=0;
    printf("Please input a value:");
    scanf("%d",&i);
    printf("%d\n",i);
    printf("the absolute value is:");
    if(i>0)
    printf("%d\n",i);
    else
    printf("%d\n",-i);
    return 0;
}
