#include <stdio.h>
typedef struct student{
    const char * name;
    int score;
}Stu;
typedef int (*cmp_t)(void *,void *);
int cmp(void *m,void *n){
if(((Stu *)m)->score > ((Stu *)n)->score)
return 1;
if(((Stu *)m)->score == ((Stu *)n)->score)
return 0;
if(((Stu *)m)->score < ((Stu *)n)->score)
return -1;
}

void *max(void *ps[],int n,cmp_t fun){
  int i;
  void *temp=ps[0]; 
  for(i=1;i<n;i++)
  if(fun(temp,ps[i])<0)
  temp=ps[i];
  return temp;
}


int main(int argc, const char *argv[])
{
    Stu class[6]={{"Jack",89},{"Mike",90},{"Lily",99},{"Green",100}};
    Stu *ps[4]={class,class+1,class+2,class+3};
    Stu *score_max=(Stu *)max((void **)ps,4,cmp);
    printf("%s:%d\n",score_max->name,score_max->score);
    return 0;
}
