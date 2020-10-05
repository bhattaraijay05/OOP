// Class Dist : feet, inches. Create 2 classes D1, D2.
// MF : add D1+D2 = d3
//        Disp : show d3, d1, d2
#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inches;
    void input()
    {
        cin >> feet >> inches;
    }
    Distance add(Distance d2)
    {
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inches = inches + d2.inches;
        return d3;
    }
};

int main()
{
    Distance d1, d2, d3;
    cout << "Read D1 " << endl;
    d1.input();
    Distance D1;
    cout << "Read D2 " << endl;
    d2.input();

    d3 = d1.add(d2);
    cout << "Addition of two distances " << endl;
    cout << d3.feet << d3.inches;

    return 0;
}