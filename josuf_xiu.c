#include <stdio.h>

int main(int argc, const char *argv[])
{
      int i,j,m,n,q,k=0;
      int a[100]={0};
     /* int count;*/

      printf("Note: 0<M<=20, 0<N<=100");

      m=atoi(argv[1]);
      n=atoi(argv[2]);


      for(q=0;q<n;q++)a[q]=1;

      printf("\n%d,%d\n",m,n);
      
     /* j = 0;
      for(i=0;i<n;i++){
      
            count = 0;

            while(++count < m){
                
                j++;
                j %= n;

                while(!a[j]){
                    j++;
                    j %= n;
                }
            
            }


            a[j] = 0;
           
            printf("%3d:%3d\t",i + 1, j + 1);
            k++; 
            if(k % 5 == 0)printf("\n");

            j++;
            j %= n;
            while(!a[j]){
                j++;
                j %= n;
            }
      
      
      }
          */
           for(i=0;k<n;i++)
           if(a[i%n]==1)
           {
            for(j=1;j<m;)
            if(a[(++i)%n]==1)
            j++;
            a[i%n]=0;
            k++;
            printf(" Num:%3d  No.%3d ",i%n+1,k);
            if(k%5==0)
            printf("\n");
           }


    return 0;
}
