#include <stdio.h>
struct gps{
    char name[4];
    int i;
    int j;
};
int main(int argc, const char *argv[])
{
   // struct gps *p_gps=(struct gps *)malloc(sizeof(struct gps));
    printf("%d\n",sizeof(struct gps));
    return 0;
}
