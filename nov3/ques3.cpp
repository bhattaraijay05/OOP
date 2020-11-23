// Consider a class Rectangle with variable x, class Square with variable y, member functions set data to read variables respectively

// class rect with variable x
// class square with variable y
// Member Function setdata to read variables respectively
// func max is not part of any class
// max func finds out the maximum amongst rect and square

#include <iostream>
using namespace std;

class Square;

class Rect
{
    int x;

public:
    void setData(int i)
    {
        x = i;
    };
    friend void max(Rect, Square);
};
class Square
{
    int y;

public:
    void setData(int i)
    {
        y = i;
    };
    friend void max(Rect, Square);
};

void max(Rect a, Square b)
{
    cout << "Rectangle is " << a.x << "Square is " << b.y << endl;
    a.x > b.y ? cout << "Rectangle is bigger" : cout << "Square is bigger";
}

int main()
{
    Rect a;
    Square b;
    a.setData(10);
    b.setData(5);
    max(a, b);
    return 0;
}