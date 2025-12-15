#include <iostream>
#include "prodWorker.h"
#include "shiftSupervisor.h"
using namespace std;

int main()
{
    const int size = 50;
    char *name = new char[size];
    int date, month, year;
    int num;
    int shift;
    double rate;
    double salary;
    double bonus;
    bool choice;

    cout << "Do you want to enter the data of employee or supervisor ?\n";
    cout << "enter 1 for employee / 0 for supervisor\n";
    cin >> choice;
    if (choice)
    {

        cout << "==========================\n";
        cout << "Enter name of employee: \n";
        cin.ignore();
        cin.getline(name, size);
        cout << "Enter date of hiring (DD MM YYYY): \n";
        cin >> date >> month >> year;
        Date d1(date, month, year);
        cout << "Enter number of employee:: \n";
        cin >> num;
        cout << "Enter shift of employee: \n";
        cin >> shift;
        cout << "Enter hourly pay rate of employee: \n";
        cin >> rate;

        ProdWorker P(name, num, shift, rate, d1);
        P.display();
    }
    else
    {
        cout << "==========================\n";
        cout << "Enter name of employee: \n";
        cin.ignore();
        cin.getline(name, size);
        cout << "Enter date of hiring (DD MM YYYY): \n";
        cin >> date >> month >> year;
        Date d2(date, month, year);

        cout << "Enter number of employee:: \n";
        cin >> num;
        cout << "Enter annual salary: \n";
        cin >> salary;
        cout << "Enter bonus: \n";
        cin >> bonus;

        ShiftSupervisor S(name, num, salary, bonus, d2);
        S.display();
    }
    delete[] name;

    return 0;
}
