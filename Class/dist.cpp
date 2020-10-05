#include <iostream>
using namespace std;

class Dist
{
    int ft, in;

public:
    void read();
    Dist add(Dist, Dist);
    void show();
};
// Reading distances
void Dist::read(){
    {cin >> ft >> in;
}
}
;

Dist Dist ::add(Dist d1, Dist d2)
{
    Dist d3;
    d3.ft = d1.ft + d2.ft;
    d3.in = d1.in + d2.in;
    return d3;
};

void Dist::show(){

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