// CPP program to demonstrate virtual function and pure virtual function
#include <iostream>
using namespace std;
class B
{
public:
    virtual void show()
    {
        cout << "This is in class B." << endl;
    }
}; // end of class B
class D1 : public B
{
    void show()
    {

        cout << "This is in class D1." << endl;
    }
}; // end of class D1
class D2 : public B
{
    void show()
    {
        cout << "This is in class D2" << endl;
    }
}; // end of class D2
int main()
{
    B *p;
    B objbase;
    D1 obj1;
    D2 obj2;
    p = &objbase;
    p->show();
    p = &obj1;
    p->show();
    p = &obj2;
    p->show();
    return 0;
}