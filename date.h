#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int date, year;
    string month;
    string monthName[12] = {"January",
                            "February",
                            "March",
                            "April",
                            "May",
                            "June",
                            "July",
                            "August",
                            "Spetember",
                            "October",
                            "November",
                            "December"};

public:
    Date(int d, int m, int y) : date(d), year(y)
    {
        if (m >= 1 && m <= 12)
            month = monthName[m - 1];
        else
            month = "Invalid Month";
    }

    void display() const
    {
        cout << "Date: " << date << " " << month << " " << year << endl;
    }
};
