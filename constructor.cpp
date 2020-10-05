#include <iostream>
using namespace std;

class Addition
{
public:
    int a, b;
    Addition(void);
    void printdata()
    {
        cout << "The sum of two numbers is " << a + b;
    }
};

Addition ::Addition(void)
{
    cout << "Enter the  value of two numbers: ";
    cin >> a >> b;
}

int main()
{
    Addition C;
    C.printdata();
    return 0;
}