#pragma once
#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    string hireDate;
    int empNumber;

public:
    Employee(string n, string h, int num) : name(n), hireDate(h), empNumber(num) {}

    void setName(string n) { name = n; }
    void setDate(string d) { hireDate = d; }
    void setNum(int n) { empNumber = n; }

    string getName() const { return name; }
    string getDate() const { return hireDate; }
    int getNumber() const { return empNumber; }
};