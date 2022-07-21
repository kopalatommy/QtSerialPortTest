#include "serialwritetest.h"

SerialWriteTest::SerialWriteTest() : QObject()
{
    serialPort = new QSerialPort();
    serialPort->setPortName(QSerialPortInfo::availablePorts()[0].portName());
    serialPort->setBaudRate(2400);
    serialPort->open(QIODevice::ReadWrite);

    connect(&writeTimer, &QTimer::timeout, this, &SerialWriteTest::WriteTestLineWhole);
    writeTimer.setSingleShot(false);
    writeTimer.setInterval(800);
    writeTimer.start();
}

void SerialWriteTest::WriteTestLineWhole()
{
    serialPort->write("1113,51897,-0.5,8.0,7.5,30.4,790.8,1555,73.3,0.953753,0.174217,109.4,0,18/07/22,11:38:32,3,19\n");
}

