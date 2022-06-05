#ifndef VREMYA_H
#define VREMYA_H
#include <string>
using namespace std;

class Time
{
public:
    Time();
    Time(int h, int m);
    Time(string time);
    void print();
    Time operator +(int mins);
    int operator -(Time an);
protected:
    int h, m;
    int omins;
};

#endif // VREMYA_H
