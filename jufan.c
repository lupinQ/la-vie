#include <stdio.h>
void *Getmem(){
    char memory[10];
    return memory;

}
int main(int argc, const char *argv[])
{
    int i;
    char *a;
    for(i=0;i<100;i++)
    {a=Getmem();
    printf("%d\t",*a);
   } return 0;
}
