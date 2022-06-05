#include "vremya.h"
#include <qdebug.h>

Time::Time()
    :Time(0,0)
{
}

Time::Time(int h, int m)
{
    omins = 60*h + m;
    while (omins>24*60) omins=omins-24*60;
    this->h = omins/60;
    this->m = omins%60;
}

Time::Time(string time)
{
    if (time[2]!=':' || time.size()!=5) {this->h=0; this->m=0;}
    else {
        omins = 60*(10*(time[0]-'0')+(time[1]-'0')) + (10*(time[3]-'0')+(time[4]-'0'));
        while (omins>=24*60) omins=omins-24*60;
        this->h = omins/60;
        this->m = omins%60;
    }
}

Time Time::operator +(int mins)
{
    return(Time(h,m+mins));
}

int Time::operator -(Time an)
{
    return(abs((h*60+m) - (an.h*60+an.m)));
}

void Time::print()
{
    if (h<10 && m<10) qDebug("0%d:0%d", h, m);
    else if (h<10) qDebug("0%d:%d", h, m);
    else if (m<10) qDebug("%d:0%d", h, m);
    else qDebug("%d:%d", h, m);
}
