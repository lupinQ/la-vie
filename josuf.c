#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i,j,m,n,q,k=0;
    int a[100]={0};


    printf("Note: 0<M<=20, 0<N<=100");
    
    m=atoi(argv[1]);
    n=atoi(argv[2]);
    
    for(q=0;q<n;q++)a[q]=1;

    printf("\n%d,%d\n",m,n);
    
    for(j=0;k<n;j++)if((j+1)%n==m)
    {
            for(i=j%n;a[i]==0;i++)
             if(i>=n)
             i=i%n;
             a[i]=0;
             k++;
             printf("%d\t %d\t\t ",i+1,k);
    }
        
    return 0;
}

