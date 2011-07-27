#include <stdio.h>
#include <stdlib.h>
#define M 20
#define N 100
typedef struct node{
    int value;
    struct node *next;
}Node,*Pnode;
int main(int argc, const char *argv[])
{
    int i,j;
    Node a[N];
    Pnode p=&a[N-2],l=&a[N-1],head=NULL,youku=NULL;
    youku=malloc(sizeof(Node)*N);
    head=&a[0];
    for(i=0;i<N-1;i++){
     a[i].value=i+1;
     a[i].next=&a[i+1];
    }
    a[N-1].value=N;
    a[N-1].next=head;
    for(i=0;i<N;i++){
    for(j=0;j<M;j++){
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

