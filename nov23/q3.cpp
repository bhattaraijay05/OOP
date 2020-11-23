// Area has clac func, it has to calculate, returns L*B, perimeter has calc func , returns (L+B *2)
#include <iostream>
using namespace std;

class Area
{
public:
    int areaCalc(int len, int bre)
    {
        return (len * bre);
    }
};

class Perimeter
{
public:
    int periCalc(int len, int bre)
    {
        return 2 * (len + bre);
    }
};

class Rectangle : public Area, public Perimeter
{
public:
    int print1()
    {
        return Area::areaCalc(2, 3);
    }
    int print2()
    {
        return Perimeter::periCalc(2, 3);
    }
};

int main()
{
    Rectangle R1;
    cout << R1.print1() << endl;
    cout << R1.print2() << endl;
    return 0;
}