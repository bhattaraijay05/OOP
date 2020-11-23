// Create a class location which had longitude and latitude. Prepare operator overloading functions for prefix operator. Add two objects and display details.

#include <iostream>
using namespace std;

class Location
{
    float longitude, latitude;

public:
    Location(){};
    Location(float lg, float lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    Location operator+(Location op2);
};

Location Location::operator+(Location op2)
{
    Location temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}

int main()
{
    Location ob1(10, 20), ob2(5, 30);
    ob1.show();
    ob2.show();
    ob1 = ob1 + ob2;
    ob1.show();
    return 0;
}