#ifndef LOG_H
#define LOG_H
#include <QtCore/qstring.h>

namespace Log
{
    QString prettyProductInfoWrapper();
    void setup(const QString &app);
}

#endif // LOG_H
