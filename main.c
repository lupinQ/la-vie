#include <stdio.h>
#include <string.h>
#include "exchange.h"
#include "d2b.h"
#include "encryption.h"
#include "multi.h"
#include "common.h"
int main(){

    int k;
    
    while(k!=5){
    printf("1.decimal to binary\n2.x*y\n3.low or up exchange\n4.encryption\n5.Exit\nPlease choose [1-5]:");
    scanf("%d",&k);
    switch(k){
      case 1:d2b();break;
      case 2:multi();break;
      case 3:exchange();break;
      case 4:encryption();break;
      case 5:break;
       }
       }
    return 0;
    }





