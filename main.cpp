#include <QCoreApplication>
#include <vremya.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Time t1(15,30), t2(17,0), t3("15:30"), t4("17:00"); int mins;
    t1.print();
    t2.print();
    mins = t2-t1;
    qDebug("%d", mins);
    (t1+mins).print();
    qDebug("\n");
    t3.print();
    t4.print();
    mins = t2-t1;
    qDebug("%d", mins);
    (t1+mins).print();
    return a.exec();
}
