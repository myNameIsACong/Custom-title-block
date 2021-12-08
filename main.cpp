#include "mainwindow.h"
#include "titlebar.h"
#include <QApplication>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *widget = new QWidget;
    widget->setWindowFlags(Qt::FramelessWindowHint);
    widget->setLayout(new QVBoxLayout);
    widget->layout()->setSpacing(0);
    widget->layout()->setMargin(0);

    TitleBar bar(widget);
    widget->installEventFilter(&bar);
    widget->setWindowTitle("钻石");
    widget->setWindowIcon(QIcon(":/images/logo.png"));

    MainWindow m(widget);
    m.setWindowFlags(Qt::Widget);

    qobject_cast<QVBoxLayout *>(widget->layout())->insertWidget(0,&bar);
    qobject_cast<QVBoxLayout *>(widget->layout())->insertWidget(1,&m);

    widget->resize(500,400);
    widget->show();

    return a.exec();
}
