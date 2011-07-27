#include <stdio.h>
int er();
int chengfa();
int ctr();
int ker();
int main(int argc, const char *argv[])
{
    int k=0;
    while(k!=5){ 
    printf("1.decimal to binary\n2.x*y\n3.low or up exchange\n4.encryption\n5.Exit\nPlease choose [1-5]:");
    scanf("%d",&k);
    switch(k){
    case 1: er();break;
    case 2: chengfa();break;
    case 3: ctr();break;
    case 4: ker();break;
    case 5:break;
    }}
    return 0;
}
int er ()
{
  int k;
  printf ("please input :");
  scanf ("%d", &k);
 
  int i = 31, m, flag = 0;
 
  if (k<0)
    for (i = 31; i >= 0; i--)
      {
	m = ((k >> i) & 1);
	printf ("%d", m);
      }
  else if(k>0){
  while(i>=0)
  if(m =((k >> (--i)) & 1))
    {
      for (; i >= 0; i--)
	{
	  m = ((k >> i) & 1);
	  printf ("%d", m);
	}
    
    }}
else if(k==0)
printf("%d",k);
printf("\n");
  return 0;
}

int chengfa(){
     int i,j;
    printf("please input the i,j:");
    scanf("%d,%d",&i,&j);
    printf("%d,%d\n",i,j);
    int xi,xj,n,result,flag;
    result=0;flag=0;
    if((i>>31)&1)xi=~(i-1);else xi=i; 
    if((j>>31)&1)xj=~(j-1);else xj=j;
    if(((i>>31)&1)^((j>>31)&1))flag=1;
    for(n=0;n<31;n++)
    {
      if((xi>>n)&1)result=result+(xj<<n);
      
    }
    if (flag) result=~result+1;
    printf("i*j=%d\n",result);
    return 0;

    }
int ctr(){
  
    char a[100]={0};
    printf("please input ");
    scanf("%s",a);
    
    int i;
    for(i=0;a[i];i++)
    if(((a[i]<='z')&&(a[i]>='a'))||((a[i]<='Z') && (a[i]>='A')))
    a[i]=a[i]^32;       
   printf("%s\n",a);
    return 0; 
   
}

int ker(){
   
   char a[100]={0},d[100]={0}, b,c='\0';
   int i,j;
   printf("Please input the key:");
   scanf("%s",a);
   getchar();
   printf("Please input the char:");
   scanf("%c",&b);
   for(i=0;a[i];i++)
   
     d[i]=a[i]^b;
   

   printf("After encrytion,%s\n",d);
   printf("您需要解密吗？Y/N");
   getchar();
   scanf("%c",&c);
   if((c=='Y')||(c=='y')) 
     printf("the key is %s\n",a);
}
