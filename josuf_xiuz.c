#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j, m, n, q, k = 0;
    int a[100] = { 0 };

    m = atoi(argv[1]);
    n = atoi(argv[2]);
    for (q = 0; q < n; q++)
	a[q] = 1;
   
   printf("Note: 0<M<=20, 0<N<=100");
   printf("m=%d,n=%d\n",m,n);

    for (i = 0; k < n; i++)
	if (a[i % n] == 1) {
	    for (j = 1; j < m;)
		if (a[(++i) % n] == 1)
		    j++;
	    a[i % n] = 0;
	    k++;
	    printf(" Num:%3d  No.%3d ", i % n + 1, k);
	    if (k % 5 == 0)
		printf("\n");
	}
    return 0;
}
