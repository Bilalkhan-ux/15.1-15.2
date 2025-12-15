#pragma once
#include <iostream>
#include <cstring>
#include "date.h"
using namespace std;
class Employee
{
protected:
    char *name;
    int empNumber;

public:
    Employee(char *n, int num)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);

        empNumber = num;
    }
    ~Employee() { delete[] name; }

    void setName(char *n)
    {
        delete[] name;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    void setNum(int n) { empNumber = n; }

    char *getName() const { return name; }
    int getNumber() const { return empNumber; }
};
