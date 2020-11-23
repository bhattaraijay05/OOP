// Consider class A, with variable V1, Class B with Variable V2, class C with variable V3, class d inherits from B and C. Multiply the values V1,V2,V3 and display the outpuut

#include <iostream>
using namespace std;

class A
{
public:
    int varV1(int v1)
    {
        return v1;
    }
};
class B : public A
{
public:
    int varV2(int v2)
    {
        return v2 * A::varV1(2);
    }
};
class C
{
public:
    int V3;
    int varV3(int v3)
    {
        return v3;
    }
};

class D : public B, public C
{
public:
    int mul()
    {
        return B::varV2(3) * C::varV3(5);
    }
};
int main()
{
    D d1;
    cout << d1.mul();
    return 0;
}