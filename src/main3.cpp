#include <iostream>
#include <string>
#include "DateTime.h"
using namespace std;
int main2() {
    DateTime dateTime(1, 11, 2018);
    DateTime dateTime2(2, 11, 2018);
    //cout << dateTime.getTomorrow() << endl;
    //cout << dateTime.getToday() << endl;
    //cout << dateTime.getYesterday() << endl;
    //cout << dateTime.getFuture(10) << endl;
    //cout << dateTime.getPast(10) << endl;
    cout << dateTime.getDifference(dateTime2) << endl;
    return 0;
}