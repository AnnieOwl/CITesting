#include "exitcodetest.h"

#include <QCoreApplication>
#include <QTimerEvent>

ExitCodeTest::ExitCodeTest( int exitCode, QObject* parent /*= nullptr*/ )
    : m_exitCode(exitCode)
{
    m_timer = startTimer( 1000, Qt::TimerType::VeryCoarseTimer );
}

ExitCodeTest::~ExitCodeTest()
{
    killTimer(m_timer);
}


void ExitCodeTest::timerEvent( QTimerEvent *event )
{
    if ( event->timerId() != m_timer )
    {
        QObject::timerEvent( event );
    }
    else
    {
        QCoreApplication::instance()->exit( m_exitCode );
    }
}