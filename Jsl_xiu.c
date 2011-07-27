#include <stdio.h>
#include <stdlib.h>

int Jsl(int ,int );

typedef struct node{
    int value;
    struct node *next;
}Node,*Pnode;

int main(int argc, const char *argv[]){
    int m,n;
    m=atoi(argv[2]);
    n=atoi(argv[1]);
    if(argc==3)
    Jsl(m,n);
    printf("\n");
    return 0;

}

int Jsl(int m,int n)
{
    int i,j;
    Pnode youku=NULL,p=NULL,l=NULL;
    youku=malloc(sizeof(Node)*n);
    p=youku;
    for(i=0;i<n-1;i++,p++){
        p->value = i+1;
        p->next = p+1;
    }
    p->value=n;
    p->next=youku;
    p=p-1;
    l=p->next;
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    p=p->next;
    l=l->next;
        } 
    printf(" %3d:%3d ",i+1,l->value);
    if((i+1)%8==0)
    printf("\n");
    p->next=l->next;
    l=l->next;
    }
    if(youku)free(youku);
    return 0;
}

