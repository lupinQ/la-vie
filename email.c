#include <stdio.h>
#include <string.h>
int email(const char* str)
{
    char *fp0;
    char a[100]={0};
    int i = 0, j = 0, k = 0, l = 0;

    fp0 = strchr(str, '@');
    if(fp0)
    if (*fp0 != str[0])
	if ((*(fp0 + 1) != *fp0) && (*(fp0 - i) != *fp0))
	  {  while (*(fp0 - i)!=' '&& (fp0-i)!=0) {
		i++;

		if ((*(fp0 - i) <= 'z' && *(fp0 - i) >= 'a')
		    || (*(fp0 - i) <= 'Z' && (*fp0 - i) >= 'A')
		    || (*(fp0 - i) == '.') || (*(fp0 - i) == '_'))
		    k++;
		else {
		    break;
		    k = -1;
		}
	    }
    while (*(fp0 + j)!=' ' && (fp0+j)!=0) {
	j++;

	if ((*(fp0 + j) <= 'z' && *(fp0 + j) >= 'a')
	    || (*(fp0 + j) <= 'Z' && (*fp0 + j) >= 'A')
	    || (*(fp0 + j) == '.') || (*(fp0 + j) == '_'))
	        l++;
	else {
	    break;
	    l = -1;
	}
    }
}

    if (k <= 32 && l <= 64 && k!=-1 && l!=-1 && k!=0 && l!=0)
	{
     for(i=0;i<k+l+1;i++)
     
     a[i]=*(fp0-k+i);
     a[i]='\0';
    for(i=0;i<k+l+1;i++)
    printf("name:%c\n",a[i]);
    }
    return 0;

}

int main(int argc, const char *argv[])
{
    FILE *fp = fopen("wangye.html", "r");
    if (!fp) {
	printf("文件不存在！");
	return 0;
    }
    while (!feof(fp)) {

	char str[1024] = { 0 };
	fgets(str, sizeof(str), fp);
	email(str);

    }
    if (fp)
	fclose(fp);

    return 0;
}
