#include <stdio.h>
int panguan ();
int main (int argc, const char *argv[])
{
  panguan ();
  return 0;
}

int panguan ()
{
  char str[1024] = { 0 }, str1[20] = {0}, str2[20] ={0}, str3[20] = {0}, 
  str4[20] = {0};
  int i, j = 0, k = 0, p = 0, q = 0, flag = 0;
  printf("mysh%% ");
  fgets (str, sizeof (str), stdin);
  for (i = 0; str[i]; i++)
    {
      if (flag == 0)
        if (str[i] != '-' && str[i] != '>' && str[i] != '<')
	        {
	        if (((str[i] <= 'z') && (str[i] >= 'a'))
		    || ((str[i] <= 'Z') && (str[i] >= 'A')))
	            {
		        str1[j++] = str[i];
		        if (str[i + 1] == ' ')
		            {
		            flag = 1;
		            i++;
		            }
	            }
	        }
	    else if (str[i] == '-')
	        {
	        flag = 1;
	        str2[k++] = str[i];
	        }
	    else if (str[i] == '<')
	        {
	        flag = 2;
	        i++;
	        }
	    else if (str[i] == '>')
	        {
	        flag = 3;
	        i++;
	        }
   
    if (flag == 1)
	    if ((str[i] != '<') && (str[i] != '>'))
            {
	        if (((str[i] <= 'z') && (str[i] >= 'a'))
		    || ((str[i] <= 'Z') && (str[i] >= 'A')) || (str[i] == '-'))
                {
	             str2[k++] = str[i];
                 if(str[i]!='-' && str[i+1]==' ')
                 str2[k++]=',';

	            }
             }
	    else if (str[i] == '<')
	        {
	        flag = 2;
	        i++;
	        }
	    else if (str[i] == '>')
	        {
	        flag = 3;
	        i++;
	        }


      if (flag == 2)
	    if (str[i] != '<')
	      if (((str[i] <= 'z') && (str[i] >= 'a'))
	      || ((str[i] <= 'Z') && (str[i] >= 'A')))
	         str3[p++] = str[i];


      if (flag == 3)
	    if (str[i] != '>')
	      if (((str[i] <= 'z') && (str[i] >= 'a'))
	      || ((str[i] <= 'Z') && (str[i] >= 'A')))
	        str4[q++] = str[i];
    
    }
  if (str[0] != '0')
    {
      printf ("Show the comand:\n");
      printf ("comand:%s ", str1);
      for(i=0;str2[i];i++)
      {
        printf (" argument:%c", str2[i]);
        for(i++;(str2[i]!=',' && str2[i]!=0);i++)
        printf("%c",str2[i]);
      }
      if (p != 0 && q != 0)
    	printf ("\nin-file:%s,out-file:%s\n", str3, str4);
      if (p != 0 && q == 0)
    	printf ("\nin-file:%s,out-file:NULL\n", str3);
      if (p == 0 && q != 0)
    	printf ("\nin-file:NULL,out-file:%s\n", str4);
    }
  return 0;
}
