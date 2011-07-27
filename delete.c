#include <sqlite3.h>
void dbid(sqlite3* db){
    
    int id,ret=0;
    char *sql=0,*err=0;
    fputs("Please input the ID:",stderr);
    scanf("%d",&id);
    sql=sqlite3_mprintf("delete from employee where id=%d;",id);
//    sqlite3_exec(db,sql,NULL,0,0);
    ret=sqlite3_exec(db,sql,rscallback,0,&err);

    if(ret!=SQLITE_OK){
    fputs(err,stderr);
    fputs("\n",stderr);
    sqlite3_close(db);
    exit(1);
    }
/*
    if(empty) {
    fputs("table employee is empty\n",stderr);
    exit(1);
    }
*/
}

void dbna(sqlite3* db){

   char * name=0,*sql=0,*err=0;
   int ret;
   printf("Please input the name:");
   scanf("%s",name);
   sql=sqlite3_mprintf("delete from employee where name=%s;",name);
 //  sqlite3_exec(db,sql,NULL,0,&err);
ret=sqlite3_exec(db,sql,rescallback,0,&err);
     if(ret!=SQLITE_OK){
         fputs(err,stderr);
         fputs("\n",stderr);
         sqlite3_close(db);
         exit(1);
       }

 /*    if(empty) {
        fputs("table employee is empty\n",stderr);
        exit(1);
       }
*/


}
void deleten(sqlite3* db){
    scanf("%d",&n);
    int n;
    printf("1.Delete by ID\n2.Delete by name\nYour choice:");
    switch(n){
       case 1:dbid(db);break;
       case 2:dbna(db);break;
       default:break;
    }
}
