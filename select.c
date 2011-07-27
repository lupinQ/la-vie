void select(sqlite3 *db){
     char *sql=0,*err=0;
     int ret;
     sql=sqlite3_mprintf("select * from employee;");
     ret=sqlite3_exec(db,sql,rscallback,NULL,&err);
     if(ret!=SQLITE_OK){
     fputs(err,stderr);
     fputs("\n",stderr);
     sqlite3_close(db);
     exit(1);
     }

}
/*int create(sqlite3 *db){
    char *sql=0;
    char *name;
    printf("The table is not exist,now we will create a table,please give a nameto it:");
    scanf("%s",name);
    sql=sqlite3_mprintf("create table %s(id integer primary key,name text,gender text,age integer);",name);
    ret=sqlite3_exec(db,sql,NULL,0,0);
    return 0;
}*/
