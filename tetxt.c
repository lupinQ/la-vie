#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char *argv[])
{
#if 0
    unsigned int *p=(unsigned int *)malloc(sizeof(unsigned int)*6),a[6]={0};
    int i,j,k;

    if(NULL == p){
    return 0;
    }
    printf("please input six unsigned integer,seperate by ','\n");
    scanf("%u,%u,%u,%u,%u,%u",p,p+1,p+2,p+3,p+4,p+5);
    for(i=0,j=0,k=0;i<6;i++)
    *(p+i)%2?(a[j++]=*(p+i)):(a[5-k++]=*(p+i));
    for(i=0;i<6;i++)
    printf("%u\t",a[i]);
    free(p);
#else
    char *p=(char *)malloc(20),*a=(char *)malloc(20);
    int i,j,k,b[20]={0};
    if(NULL == p || NULL == a){
    return 0;
    }
    memset(p,0,20);
    printf("please input the alphabetic string!\n");
    scanf("%s",p);
    
    for(i=0;p[i];i++)
    a[i]=p[i];
   
    for(j=0;j<i-1;j++)
    for(k=0;k<i;k++)
    if(a[j] == p[k] && j != k)
    b[j] = 1;
    
    for(k=0;k<i;k++)
    if(b[k] == 0){ 
    printf("%c\n",a[k]);
    break;
    }
#endif     
    free(p);
    free(a);
    return 0;
}

