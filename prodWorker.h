#pragma once
#include <iostream>
#include "employee.h"
using namespace std;

class ProdWorker : public Employee
{
private:
    int shift;
    double hourlyPayRate;

public:
    ProdWorker(string n, string d, int num, int s, double h) : Employee(n, d, num), shift(s), hourlyPayRate(h) {}

    void setShift(int s) { shift = s; }
    void setRate(double r) { hourlyPayRate = r; }

    int getShift() const { return shift; }
    double getRate() const { return hourlyPayRate; }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Date of hiring: " << hireDate << endl;
        cout << "Number: " << empNumber << endl;
        cout << "Shift: " << shift << endl;
        cout << "Hourly pay rate: " << hourlyPayRate << endl;
    }
};
