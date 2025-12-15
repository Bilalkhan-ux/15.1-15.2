#pragma once
#include "employee.h"
#include "date.h"
class ShiftSupervisor : public Employee
{
private:
    double annualSalary;
    double annualBonus;
    Date d;

public:
    ShiftSupervisor(char *n, int num, double s, double b, Date date) : Employee(n, num), annualSalary(s), annualBonus(b), d(date) {}

    void setSalary(double s) { annualSalary = s; }
    void setBonus(double s) { annualBonus = s; }

    double getSalary() const { return annualSalary; }
    double getBonus() const { return annualBonus; }

    void display() const
    {
        cout << "====SuperVisor Data====\n";
        cout << "Name: " << name << endl;
        cout << "Date of hiring: " << endl;
        d.display();
        cout << "Number: " << empNumber << endl;
        cout << "Annual salary: " << annualSalary << endl;
        cout << "Bonus: " << annualBonus << endl;
    }
};
