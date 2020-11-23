// consider a class shape with (x,y) cordinates.raise suitable classes to derive from base class shape ,class circle , class rectangle,class  triangle , are 3 subclasses of class shape . function draw has suitable statements displayed and simple calculations .

#include <iostream>
using namespace std;

class Shape
{
public:
    float x, y;
    void readInput()
    {
        cout << "Enter the value for X and Y: " << endl;
        cin >> x;
        cin >> y;
    }
};

class Circle : public Shape
{
public:
    void Draw()
    {
        readInput();
        cout << "The area of circle is "
             << "X: " << 3.1415 * x * x << " and \nY: " << 3.1415 * y * y << endl;
    };
};
class Rectangle : public Shape
{
public:
    void Draw()
    {
        readInput();
        cout << "The area of rectangle is: " << x * y << endl;
    };
};
class Triangle : public Shape
{
public:
    void Draw()
    {
        readInput();
        cout << "The area of triangle is: " << 0.5 * x * y << endl;
    };
};

int main()
{
    Circle C1;
    Triangle T1;
    Rectangle R1;
    C1.Draw();
    R1.Draw();
    T1.Draw();
    return 0;
}