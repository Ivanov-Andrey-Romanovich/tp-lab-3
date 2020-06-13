#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <string>
using namespace std;
DateTime::DateTime() {
    time(&seconds);
    time_structure = localtime(&seconds);
}

DateTime::~DateTime() {}

DateTime::DateTime(int day, int month, int year) {
    time(&seconds);
    time_structure = localtime(&seconds);

    time_structure->tm_year = year - 1900;
    time_structure->tm_mon = month - 1;
    time_structure->tm_mday = day;

    seconds = mktime(time_structure);
    time_structure = localtime(&seconds);
}

DateTime::DateTime(DateTime& from) {
    seconds = from.seconds;
    time_structure = localtime(&seconds);
}

string DateTime::getFuture(unsigned int N) {
    time_t temp = seconds + N * 24 * 3600;
    tm* future = localtime(&temp);
    return timeToStr(future);
}

string DateTime::getToday() {
    return timeToStr(time_structure);
}

string DateTime::getYesterday() {
    return getPast(1);
}

string DateTime::getTomorrow() {
    return getFuture(1);
}

string DateTime::getPast(unsigned int N) {
    return getFuture(-1 * N);
}

int DateTime::getDifference(DateTime& ref) {
    return (int)((unsigned long long)(std::abs(ref.seconds - seconds)) / (3600 * 24));
}

string DateTime::timeToStr(tm* time) {
    string s;
    if (time->tm_mday < 10)
        s += "0";
    s += to_string(time->tm_mday) + " " + months[time->tm_mon] + " " + to_string(time->tm_year + 1900) + ", " + weekDays[time->tm_wday];
    return s;
}