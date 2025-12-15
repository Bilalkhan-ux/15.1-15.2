#pragma once
#include <iostream>
#include "employee.h"
#include "date.h"

using namespace std;

class ProdWorker : public Employee
{
private:
    int shift;
    double hourlyPayRate;
    Date d;

public:
    ProdWorker(char *n, int num, int s, double h, Date date) : Employee(n, num), shift(s), hourlyPayRate(h), d(date) {}

    void setShift(int s) { shift = s; }
    void setRate(double r) { hourlyPayRate = r; }

    int getShift() const { return shift; }
    double getRate() const { return hourlyPayRate; }

    void display()
    {
        cout << "====EMPLOYEE DATA====\n";
        cout << "Name: " << name << endl;
        cout << "Date of hiring: " << endl;
        d.display();
        cout << "Number: " << empNumber << endl;
        cout << "Shift: ";
        if (shift == 1)
        {
            cout << "Morning\n";
        }
        else
            cout << "Evening\n";
        cout << "Hourly pay rate: " << hourlyPayRate << endl;
    }
};
