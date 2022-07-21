#ifndef SERIALWRITETEST_H
#define SERIALWRITETEST_H

#include <QSerialPort>
#include <QTimer>
#include <QSerialPortInfo>

class SerialWriteTest : public QObject
{
    Q_OBJECT
public:
    SerialWriteTest();

private slots:
    void WriteTestLineWhole();

private:
    QSerialPort* serialPort;

    QTimer writeTimer;
};

#endif // SERIALWRITETEST_H
