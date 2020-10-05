// Class Person with suitable attributes, functions. Create an object to exhibit usage of class. [Read, Disp functions] = PersonObj.cpp

// Class Person with suitable attributes, functions, hold an array attribute within class [3 bank accounts]. Create an array of objects [3 People] to exhibit usage of class. [Read, Disp functions] = PersonArrayObj.cpp

#include <iostream>
using namespace std;

// Class Person : name, address, sal, age, gender
//  function : readDetails, dispDetails

class Person
{
    char name[10], address[20], gender[10];
    int salary, age;

public:
    void readDetails();

    void displayDetails();
};

void Person ::readDetails()
{
    cout << "Enter the name, address, gender, salary, age of person: " << endl;
    cin >> name >> address >> gender >> salary >> age;
}

void Person ::displayDetails()
{

    cout << "The details of person: " << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Gender: " << gender << endl;
    cout << "Salary: " << salary << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    Person person;
    person.readDetails();
    person.displayDetails();
    return 0;
}