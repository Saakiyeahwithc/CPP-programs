// CPP program to demonstrate constructor and destructor in inheritance
#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Constructing base:\n";
    }
    ~Base()
    {
        cout << "Destructing base:\n";
    }
};
class derived : public Base
{
public:
    derived()
    {
        cout << "Construcring derived:\n";
    }
    ~derived()
    {
        cout << "Destructing derived:\n";
    }
};
int main()
{
    derived obj;
    return 0;
}