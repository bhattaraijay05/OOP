// Class Person with suitable attributes, ctors, functions. Create an object P1 (ctor) to exhibit usage of class [Read is replaced with ctor, Disp functions]. Create an object  P2 to exhibit usage of class. [Read, Disp functions] = PersonCtor.cpp
// class stud three cases
// attr : 3
// func :2
// lockdown analysis
// TV shows
// Eating styles
#include <iostream>
using namespace std;

class Person
{

    string name, address, gender;
    int salary, age;

public:
    Person(void);
    void printdata()
    {
        cout << "The details of person: " << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Gender: " << gender << endl;
        cout << "Salary: " << salary << endl;
        cout << "Age: " << age << endl;
    }
};

Person ::Person(void)
{
    cout << "Enter the name, address, gender, salary, age of person: " << endl;
    cin >> name >> address >> gender >> salary >> age;
}

int main()
{
    Person C;
    C.printdata();
    return 0;
}