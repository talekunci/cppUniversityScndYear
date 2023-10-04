//
// Created by Kyrylo on 11.09.2023.
//

#ifndef CPP_DATE_H
#define CPP_DATE_H

#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;


class Date {
private:
    int day, month, year;

public:
    Date() {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        day = ltm->tm_mday;
        month = ltm->tm_mon;
        year = ltm->tm_year + 1900;
    }

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    Date(Date const &date) {
        day = date.getDay();
        month = date.getMonth();
        year = date.getYear();
    }

    ~ Date() {}

    void print() const {
        cout << day << "." << month << "." << year << endl;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    int &setDay(int d) {
        if (0 < d && d <= 31) day = d;
        return day;
    }

    int &setMonth(int m) {
        if (0 < m && m <= 12) month = m;
        return month;
    }

    int &setYear(int y) {
        year = y;
        return year;
    }

    friend ostream &operator<<(ostream &os, const Date &date) {
        os << date.day << "." << date.month << "." << date.year;
        return os;
    }

};


#endif //CPP_DATE_H
