#ifndef PLUGIN_H
#define PLUGIN_H
#include "dwkeyboard_global.h"
#include "platforminputcontext.h"
#include <QStringList>

class DWKEYBOARDSHARED_EXPORT QVirtualKeyboardPlugin
{
public:
	QVirtualKeyboardPlugin(){}
    QtVirtualKeyboard::PlatformInputContext *create(const QString&, const QStringList&);
};

#endif // PLUGIN_H
