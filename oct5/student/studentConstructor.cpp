#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    string name, usn, section;
    int DOB;

public:
    void readDetails();
    void displayDetails();

    Students() : name("NULL"), usn("NULL"), section("NULL"), DOB(0) {}
    Students(string name, string usn, string section, int dob) : name(name), usn(usn), section(section), DOB(dob){};
};

void Students ::readDetails()
{
    cout << "Enter the Name, USN, Section and year of birth of the student: " << endl;
    cin >> name >> usn >> section >> DOB;
}

void Students ::displayDetails()
{
    cout << "\nThe details of Student: " << endl;
    cout << "Name: " << name << endl;
    cout << "USN: " << usn << endl;
    cout << "Section: " << section << endl;
    cout << "Year of Birth: " << DOB << endl;
}

int main()
{
    Students student;
    student.readDetails();
    student.displayDetails();
    return 0;
}