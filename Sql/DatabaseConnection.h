#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

class DatabaseConnection
{
    QSqlDatabase db;
public:
    DatabaseConnection();
};

#endif // DATABASECONNECTION_H
