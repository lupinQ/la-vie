#include <stdio.h>
#include <> 
#include <>
#include <>
#include <>
typedef struct node{
    unsigned ID;
    char name[20];
    float chgrade;
    float mathgrade;
    float average;
    }NODE;

int link(const char *argv[])
{ 
    struct{
       NODE a;
       NODE *next;
    }data[100]={0};    
    
    return 0;
}
