#include <QCoreApplication>

#include "serialwritetest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SerialWriteTest writeTest;

    return a.exec();
}
