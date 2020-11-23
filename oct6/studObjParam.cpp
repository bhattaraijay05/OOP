#include <iostream>
#include <string>
using namespace std;

class Student
{

public:
    string name, usn, section;
    int marks;
    void readDetails();
    void displayDetails();
    void addMarks(Student);
};

void Student::addMarks(Student S1)
{
    cout << "\n\nTotal Marks of two students is: " << (marks + S1.marks) << endl;
}

void Student ::readDetails()
{
    cout << "Enter the Name, USN, Section and mark of student : " << endl;
    cin >> name >> usn >> section >> marks;
}

void Student ::displayDetails()
{
    cout << "\nThe details of Student: " << endl;
    cout << "Name: " << name << endl;
    cout << "USN: " << usn << endl;
    cout << "Section: " << section << endl;
    cout << "Mark of student:  " << marks << endl;
}
int main()
{
    Student S1, S2;
    S1.readDetails();

    S2.readDetails();
    S1.displayDetails();

    S2.addMarks(S1);
    return 0;
}