#include < stdio.h >
#include <string.h>
#include <stdlib.h>
#include <sqlite3.h>
#include "global_var.h"
  void
create_db (void)
{
  char *sql = NULL;
  char *errmsg = NULL;
  int ret;

  sql = "create table my_table (id integer primary key autoincrement,domain text , page text , status integer)";
  ret = sqlite3_exec (db, sql, NULL, NULL, &errmsg);

  if (ret != SQLITE_OK)
    printf ("%s", errmsg);
  errmsg = NULL;

  return;
}

int search_callback (void *p, int argc, char **argv, char **argvv)
{
  *(int *) p = 0;

  must = 0;
  return 0;

}

void insert_db (char *domain, char *page, int status)
{
  char *sql = NULL;
  char *errmsg = NULL;
  int ret;

  sql = sqlite3_mprintf ("insert into my_table(domain,page,status)" "values(%Q,%Q,%d)", domain, page, status);
  ret = sqlite3_exec (db, sql, NULL, NULL, &errmsg);
  sqlite3_free (sql);
  sql = NULL;

  if (ret != SQLITE_OK)
    printf ("%s", errmsg);
  errmsg = NULL;
}
