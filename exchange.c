#include <stdio.h>
int exchange(){
  
    char a[100]={0};
    printf("please input ");
    scanf("%s",a);
    
    int i;
    for(i=0;a[i];i++)
    if(((a[i]<='z')&&(a[i]>='a'))||((a[i]<='Z') && (a[i]>='A')))
    a[i]=a[i]^32;       
   printf("%s",a);
    return 0; 
   
}
