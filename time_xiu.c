
#include <stdio.h>
#include <unistd.h>
typedef struct{
 int h;
 int m;
 int s;
}clock_t;

clock_t time(clock_t t ){
      
      t.s=t.s+1;

      if(t.s<=59);
      else
      {t.s=0;
      t.m=t.m+1;
      if(t.m<=59);
      else
      {
      t.m=0;
      t.h=t.h+1;
      if(t.h<=23);
      else
      t.h=0;
      }
     }
     return t;
}

void main(int argc, const char *argv[])
{   
   clock_t t;
   t.h=0;t.m=0;t.s=0;
    while(1){
    printf("%d%d:%d%d:%d%d\r",t.h/10,t.h%10,t.m/10,t.m%10,t.s/10,t.s%10);
    t=time(t);
    sleep(1);
      fflush(stdout);
    }
   
}
