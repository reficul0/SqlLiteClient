#include "DatabaseConnection.h"

#include <QDebug>
#include <QSqlError>

DatabaseConnection::DatabaseConnection()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./db.db");

    qDebug() << ( db.open() ? "Connected...": db.lastError().text() );
}
