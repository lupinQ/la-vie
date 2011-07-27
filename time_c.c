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
   char i[3]={0};
   char j[3]={0};
   char k[3]={0};
    t=time(t);
    sleep(1);
    if(t.h<10)
    {
    i[0]=48;
    i[1]=t.h+48;
    }
    else
    {
    i[0]=t.h/10+48;
    i[1]=t.h%10+48;
    } 
    if(t.m<10)
    {
    j[0]=48;
    j[1]=t.m+48;
    }
    else
    { 
    j[0]=t.m/10+48;
    j[1]=t.h%10+48;
    }
    if(t.s<10)
    {
    k[0]=48;
    k[1]=t.s+48;
    }
    else
    {
    k[0]=t.s/10+48;
    k[1]=t.s%10+48;
    }
    printf("%s:%s:%s\r",i,j,k);
      fflush(stdout);
    }
   
}
