#pragma once

#include <iostream>
#include <ctime>
using namespace std;
class DateTime {

private:
    string timeToStr(tm* time);
    time_t seconds;
    tm* time_structure;
    const string weekDays[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    const string months[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
public:
    DateTime(int day, int month, int year);
    DateTime();
    DateTime(DateTime&);
    ~DateTime();
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    int getDifference(DateTime&);
};
