#include <iostream>
using namespace std;
namespace hi
{
    void f1()
    {
        cout << "Hello" << endl;
    }
    namespace hihi
    {
        void nn()
        {
            cout << "Hi from HIHI";
        }
    } // namespace hihi
} // namespace hi

namespace hi
{
    void f()
    {
        cout << "Hi" << endl;
    }
} // namespace hi
