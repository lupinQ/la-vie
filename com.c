#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string.h>
int recall(void *p,int argc,char **argv,char **argvv){
    int i;
    *(int *)p=0;
   for(i=0;i<argc;i++)
   printf("%s=%s",argvv[i],argv[i]?argv[i]:"NULL");
   printf("\n");
  
   return 0;
}
void selectn(sqlite3* db){
     char *sql=0,*err=0;
     int ret=0,empty=1;
     sql=sqlite3_mprintf("select * from employee;");
     ret=sqlite3_exec(db,sql,recall,&empty,&err);
     if(ret!=SQLITE_OK){
     fputs(err,stderr);
     fputs("\n",stderr);
     sqlite3_close(db);
     exit(1);
     }

}
void insert(sqlite3* db)
{
    char *sql=NULL,*err=0;
    int id,age,i,ret=0,flag=0,empty=0;
    char name[20]={0},gender[7]={0},p='Y',m[5]="male",f[7]="female";
    
    while(p=='Y'){
    printf("Please input ID name gender age:");
   scanf("%d %s %s %d",&id,name,gender,&age);
    if(id<=0 || age<=0)
    flag=1;
   switch(strlen(gender)){
        case 4:for(i=0;gender[i];i++)if(gender[i]!=m[i])flag=1;break; 
        case 6:for(i=0;gender[i];i++)if(gender[i]!=f[i])flag=1;break;
        default:flag=1;break;
    }
//    if(strcmp(gender,"male")==0 || strcmp(gender,"female"==0))
      if(flag==0)              
      {sql=sqlite3_mprintf("insert into employee values(%d,%Q,%Q,%d);",id,name,gender,age);
    ret=sqlite3_exec(db,sql,recall,&empty,&err);
    if(ret!=SQLITE_OK){
     fputs(err,stderr);
     fputs("\n",stderr);
     sqlite3_close(db);
     exit(1);
     }

    }
    else 
     printf("the input is illegal!");
    printf("insert another one?Y or N:");
    scanf("%c",&p);
    }
}
int create(sqlite3* db){
    char *sql=0,*err=0;
    int ret=0,empty=0;
    printf("The table is not exist,now we will create a table named employee\n");
    sql=sqlite3_mprintf("create table employee(id integer primary key,name text,gender text,age integer);");
    ret=sqlite3_exec(db,sql,recall,&empty,&err);
    if(ret!=SQLITE_OK){
    fputs(err,stderr);    
    fputs("\n",stderr);
    sqlite3_close(db);
    exit(1);
    }

    return 0;
}
void dbid(sqlite3* db){
    
    int id,ret=0,empty=0;
    char *sql=0,*err=0;
    fputs("Please input the ID:",stderr);
    scanf("%d",&id);
    sql=sqlite3_mprintf("delete from employee where id=%d;",id);
    ret=sqlite3_exec(db,sql,recall,&empty,&err);
    if(ret!=SQLITE_OK){
    fputs(err,stderr);
    fputs("\n",stderr);
    sqlite3_close(db);
    exit(1);
    }
}

void dbna(sqlite3* db){
   char * name=NULL,*sql=0,*err=0;
   int ret=0,empty=0;
   printf("Please input the name:");
   scanf("%s",name);
   sql=sqlite3_mprintf("delete from employee where name=%s;",name);
ret=sqlite3_exec(db,sql,recall,&empty,&err);
     if(ret!=SQLITE_OK){
         fputs(err,stderr);
         fputs("\n",stderr);
         sqlite3_close(db);
         exit(1);
       }

}
void deleten(sqlite3* db){
    int n;
    printf("1.Delete by ID\n2.Delete by name\nYour choice:");
    scanf("%d",&n);
    switch(n){
       case 1:dbid(db);break;
       case 2:dbna(db);break;
       default:break;
    }
}
int link()
{
    sqlite3* db=NULL;
    char *err=0;
    int n=0,ret=0;
    int empty=1;
    while(n!=4){
    ret=sqlite3_open("../lentest/ceshi.db",&db);
    if(ret!=SQLITE_OK){
        fputs(sqlite3_errmsg(db),stderr);
        fputs("\n",stderr);
        exit(1);
    }
    ret=sqlite3_exec(db,"select * from employee;",recall,&empty,&err);
    if(ret!=SQLITE_OK){
    
        fputs(err,stderr);
        fputs("\n",stderr);
        sqlite3_close(db);
        exit(1);
    }
    if(empty)
    create(db);
    printf("\n学生信息管理系统\n1.显示学生信息\n2.向系统中插入新的学生信息\n3.删除学生信息\n4.退出\n请选择1~4:");
    scanf("%d",&n);
    switch(n){
    case 1:selectn(db);break;
    case 2:insert(db);break;
    case 3:deleten(db);break;
    case 4:break;
    }
    sqlite3_close(db);
    }
    return 0;
}
int main()
{
    link();
    return 0;
}
