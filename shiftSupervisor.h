#pragma once
#include "employee.h"
class ShiftSupervisor : public Employee
{
private:
    double annualSalary;
    double annualBonus;

public:
    ShiftSupervisor(string n, string d, int num, double s, double b) : Employee(n, d, num), annualSalary(s), annualBonus(b) {}

    void setSalary(double s) { annualSalary = s; }
    void setBonus(double s) { annualBonus = s; }

    double getSalary() const { return annualSalary; }
    double getBonus() const { return annualBonus; }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Date of hiring: " << hireDate << endl;
        cout << "Number: " << empNumber << endl;
        cout << "Annual salary: " << annualSalary << endl;
        cout << "Bonus: " << annualBonus << endl;
    }
};