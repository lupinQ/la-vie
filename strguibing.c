#include <stdio.h>
char * strcombine(char * dest,const char * str1,const char * str2){
    
    int i,j,k,l;
    
    for(i=0,j=0,k=0;str1[i]&&str2[j];)
    { 
       l=str1[i]-str2[j];
       if(l>=0)
       dest[k++]=str2[j++];
       else
       dest[k++]=str1[i++];
    } 
    
    dest[k]=0;
   
    return dest;
   
                 

}
int main()
{
   char str1[6]={'a','b','s','e','f'};
   
   char str2[7]={'d','e','m','a','b','c'};
   
   char dest[20];
   
   strcombine(dest,str1,str2);
   
   printf("%s \n%s \n",str1,str2);
   printf("%s \n",dest);
   
   return 0;
}
