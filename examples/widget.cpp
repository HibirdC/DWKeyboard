#include "widget.h"
#include "ui_widget.h"
#include "KeyboardGlobal.h"
#include "QGPLineEdit.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    GlobalInit();
    ui->lineEdit->installEventFilter(this);
    ui->lineEdit->setMode(LINEEDITMODE::LINEEDIT_NUM);
    ui->textEdit->installEventFilter(this);
    ui->plainTextEdit->installEventFilter(this);
    //////////////////////////////////////////////////////////////////////////
    ui->listWidget->setViewMode(QListView::ListMode);
    ui->listWidget->setFlow(QListView::LeftToRight);
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    for (int i = 0; i < 100; i++)
    {
        char buffer[100] = {0};
        sprintf(buffer, "%d%d%d", i, i, i);
        ui->listWidget->addItem(QString(buffer));
    }
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type()==QEvent::FocusIn)
    {
        bool onlyNumber = false;
        QGPLineEdit* pWidget = qobject_cast<QGPLineEdit*>(watched);
        if(pWidget)
        {
            onlyNumber = pWidget->getMode() == LINEEDITMODE::LINEEDIT_NUM;
        }
        PlatformInputContextBase->SetOnlyNumber(onlyNumber);
        PlatformInputContextBase->FocusIn(watched);
    }
    else if (event->type()==QEvent::FocusOut)
    {
        PlatformInputContextBase->FocusOut(watched);
    }

    return QWidget::eventFilter(watched,event);
}
