// Person with basic attr, and func
// Student with basic attr, and func
// show inheritance
#include <iostream>
#include <string.h>
using namespace std;

class Person
{
public:
    string personName;
};
class Student : public Person
{
public:
    string studentName;
};
int main()
{
    Student s1;
    s1.personName = "Person";
    s1.studentName = "student";
    cout << s1.personName << endl
         << s1.studentName << endl;
    return 0;
}