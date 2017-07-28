
#include <QtCore/QCoreApplication>
#include <QString>
#include "exitcodetest.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int returnCode = 1000;
    if (argc > 1)
    {
        returnCode = QString( argv[1] ).toInt();
    }

    ExitCodeTest exitCodeTest(returnCode);

    std::cout << "Current return code: " << returnCode << std::endl;

    return a.exec();
}
