
int create(sqlite3* db){
    char *sql=0,*err=0;
    int ret;
    printf("The table is not exist,now we will create a table named employee");
    sql=sqlite3_mprintf("create table employee(id integer primary key,name text,gender text,age integer);");
    ret=sqlite3_exec(db,sql,rscallback,0,&err);
    if(ret!=SQLITE_OK){
    fputs(err,stderr);    
    fputs("\n",stderr);
    sqlite3_close(db);
    exit(1);
    }

    return 0;
}
