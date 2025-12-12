#include <iostream>
#include "prodWorker.h"
#include "shiftSupervisor.h"
using namespace std;

int main()
{
    string name;
    string date;
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
        cout << "Enter name of employee: \n";
        cin.ignore();
        getline(cin, name);
        cout << "Enter date of hiring: \n";
        cin >> date;
        cout << "Enter number of employee:: \n";
        cin >> num;
        cout << "Enter shift of employee: \n";
        cin >> shift;
        cout << "Enter hourly pay rate of employee: \n";
        cin >> rate;

        ProdWorker P(name, date, num, shift, rate);
        P.display();
    }
    else
    {
        cout << "Enter name of employee: \n";
        cin.ignore();
        getline(cin, name);
        cout << "Enter date of hiring: \n";
        cin >> date;
        cout << "Enter number of employee:: \n";
        cin >> num;
        cout << "Enter annual salary: \n";
        cin >> salary;
        cout << "Enter bonus: \n";
        cin >> bonus;

        ShiftSupervisor S(name, date, num, salary, bonus);
        S.display();
    }

    return 0;
}