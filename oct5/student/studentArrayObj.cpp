#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    string name, usn, section;
    int DOB, marks[3];

public:
    void readDetails();
    void displayDetails();
};

void Students ::readDetails()
{
    cout << "Enter the Name, USN, Section and year of birth of the student: " << endl;
    cin >> name >> usn >> section >> DOB;
    cout << "Enter the marks in three subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }
}

void Students ::displayDetails()
{
    cout << "\nThe details of Student: " << endl;
    cout << "Name: " << name << endl;
    cout << "USN: " << usn << endl;
    cout << "Section: " << section << endl;
    cout << "Year of Birth: " << DOB << endl;

    cout << "Marks in three subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cout << marks[i];
    }
}

int main()
{
    Students student[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        student[i].readDetails();
    }
    for (i = 0; i < 2; i++)
    {
        student[i].displayDetails();
    }
    return 0;
}