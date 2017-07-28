#pragma once

#include <QObject>

class ExitCodeTest : public QObject
{
    Q_OBJECT
    
    public:
        ExitCodeTest( int exitCode, QObject* parent = nullptr );
        ~ExitCodeTest();

    protected:
        virtual void timerEvent( QTimerEvent *event ) override;

    private:
        int m_timer;
        int m_exitCode;
};