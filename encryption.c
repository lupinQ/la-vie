#include <stdio.h>
int encryption(){
   
   char a[100]={0}, b;
   int i;
   printf("Please input the key:");
   scanf("%s",a);
   getchar();
   printf("Please input the char:");
   scanf("%c",&b);
   printf("%c\n",b);
   for(i=0;a[i];i++)
   {
     a[i]^=b;
   }

   printf("After encrytion,%s\n",a);
   return 0;
}

