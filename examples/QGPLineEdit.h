#ifndef QGPLINEEDIT_H
#define QGPLINEEDIT_H

#include <QObject>
#include <QLineEdit>

enum LINEEDITMODE{
    LINEEDIT_NUM = 0,
    LINEEDIT_STR = 1
};
class QGPLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    QGPLineEdit(QWidget *parent = nullptr);
    void setMode(LINEEDITMODE mode){
        m_mode = mode;
    }
    LINEEDITMODE getMode(){
        return m_mode;
    }
private:
    LINEEDITMODE m_mode;
};

#endif // QGPLINEEDIT_H
