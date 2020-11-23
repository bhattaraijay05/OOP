#include <iostream>
using namespace std;

class Shape
{
public:
    void Draw()
    {
        cout << "\nHello World from Shape " << endl;
    }
};

class Circle : public Shape
{
public:
    void Draw()
    {
        Shape::Draw();
        cout << "Hello World from Circle " << endl;
    };
};
class Rectangle : public Shape
{
public:
    void Draw()
    {
        Shape::Draw();
        cout << "Hello World from Rectangle " << endl;
    };
};
class Triangle : public Shape
{
public:
    void Draw()
    {
        Shape::Draw();
        cout << "Hello World from Triangle " << endl;
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
    return 0;
}