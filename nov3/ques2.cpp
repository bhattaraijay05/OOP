// create class sample
// sample has attr and func
// sample has sampleID in private scope
// sampleID accessed through non MF

#include <iostream>
using namespace std;

class Sample
{
    int sampleId;

public:
    void get();
    friend void set(Sample sampleId);
};

void set(Sample sampleId)
{
    cout << "sampleId";
}

void Sample::get()
{
    cout << "Hello World";
}

int main()
{
    Sample s;
    s.get();

    return 0;
}