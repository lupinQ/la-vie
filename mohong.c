#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("%d\n",__LINE__);
    printf("%s\n",__FILE__);

    printf("%s\n",__TIME__);
    printf("%s\n",__DATE__);

    printf("%d\n",__STDC__);



    return 0;
}
