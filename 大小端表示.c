#include <stdio.h>
int duan(){
 union{
      int a;
      char b[4];
    }x1;
    x1.a=0x12000021;
    
  if(x1.b[3]==0x12)
     printf("小端");
  else if(x1.b[3]==0x21)
    printf("大端");

  return 0;

}
int main(int argc, const char *argv[])
{
     duan();
     return 0;
}
