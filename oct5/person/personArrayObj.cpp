
// Class Person with suitable attributes, functions, hold an array attribute within class [3 bank accounts]. Create an array of objects [3 People] to exhibit usage of class. [Read, Disp functions] = PersonArrayObj.cpp

#include <iostream>
using namespace std;

class Person
{
    char name[10], address[20], gender[10];
    int salary, age;
    int bankAcc[3];

public:
    void readDetails();
    void displayDetails();
};

void Person ::readDetails()
{
    cout << "Enter the name, address, gender, salary, age of person: " << endl;
    cin >> name >> address >> gender >> salary >> age;

    cout << "Enter the bank account details: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> bankAcc[i];
    }
}

void Person ::displayDetails()
{

    cout << "The details of person: " << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Gender: " << gender << endl;
    cout << "Salary: " << salary << endl;
    cout << "Age: " << age << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Bank account details" << bankAcc[i];
    }
}

int main()
{
    Person person[3];

    int i;

    for (i = 0; i < 3; i++)
    {
        person[i].readDetails();
    }

    person[i].displayDetails();
    return 0;
}