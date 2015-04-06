
#ifndef TODAT_20150405
#define TODAT_20150405

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>


static bool createConnection()
{
   
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("voice.db");
    if (!db.open()) {
    
    }

    QSqlQuery query(db);
    query.exec("create table table1 (id int primary key, "
               "Iden varchar(20), Shuoming varchar(20))");

    query.exec("insert into table1 values(1, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(2, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(3, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(4, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(5, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(6, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(7, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(8, 'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(10,'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(11,'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(12,'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(13,'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(14,'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(15,'shibie-1', 'shuoming-1')");
    query.exec("insert into table1 values(16,'shibie-1', 'shuoming-1')");


    query.exec("create table table2 (id int primary key, "
               "shibie1  varchar(20), hecheng  varchar(20), shibie2 varchar(20))");
    query.exec("insert into table2 values(1,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(2   'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(3,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(4,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(5,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(6,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(7,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(8,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(9,  'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(10, 'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(11, 'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(12, 'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(13, 'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(14, 'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(15, 'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");
    query.exec("insert into table2 values(16, 'biao-2', 'biao-2-hecheng', 'bb-2ssss-2')");


 	return true;
}

#endif
