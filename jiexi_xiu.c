#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    shell();

    return 0;
}
int shell()
{
  char str[1024] = { 0 }, comand[20] = {0}, argument[30] ={0}, *value=NULL,*next[2]={0},*file=NULL;
  int i;
  printf("mysh%% ");
  fgets (str, sizeof (str), stdin);
  value=str;
  strncpy(comand,strsep(&value," "),19);
  printf("comand:%s ",comand);
  next[0]=next[1]=file=value;;
  value=strsep(&next[0],"<");
  file=strsep(&next[1],">");
  if(strcmp(value,file)>0)
  value=file;
  for(i=0;*value;i++){
  strncpy(argument,strsep(&value," "),29);
  printf("argument:%s ",argument);
  
    }
    if(next[0] || next[1])
    printf("\nin-file:%s,out-file:%s ",next[0]?next[0]:"NULL",next[1]?next[1]:"NULL");
  return 0;
}
