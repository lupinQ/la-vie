#include <stdio.h>
#include <string.h>
/*int main(){
    char str[]="root:x::0:root:/root:/bin/bash:";
    char *buf;
    char *token;
    buf=str;
    while((token=strsep(&buf,":"))!=NULL){
    printf("%s\n",token);
    }
    return 0;
}*/

void main(){
    char str[]="Number=100&maxMtu=200";
    char *name,*value,*next;
    int i;
    value=str;
    for(i=0;i<2;i++){
    name=strsep(&value,"=");
    next=value;
    value=strsep(&next,"&");
    printf("name=%s\n",name);
    printf("value=%s\n",value);
    value=next;
    }
}


