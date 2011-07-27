void insert(sqlite3 *db)
{
    char *sql=NULL,*err=0;
    int id,age,i,ret,flag=0;
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
    if(flag==0){
    sql=sqlite3_mprintf("insert into employee values(%d,%Q,%Q,%d);",id,name,gender,age);
    ret=sqlite3_exec(db,sql,rscallback,0,&err);
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
    scanf("%c",p);
    }
}
