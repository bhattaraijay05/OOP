#include <iostream>
using namespace std;
class Book
{
private:
    int year;
    double price;

public:
    void printBook();
    void setPrice(double p);
    void setYear(int y);

} book1, book2, book3;
void Book::setPrice(double p)
{
    price = p;
}
void Book::setYear(int y)
{
    year = y;
}
void Book::printBook()
{
    cout << "Price: " << price << "\n";
    cout << "Year: " << year << "\n";
}
int main()
{
    book1.setYear(2013);
    book1.setPrice(500);
    book1.printBook();

    book2.setYear(2017);
    book2.setPrice(800);
    book2.printBook();

    book3.setYear(2003);
    book3.setPrice(250);
    book3.printBook();
    return 0;
}