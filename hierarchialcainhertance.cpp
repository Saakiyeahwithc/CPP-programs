// CPP program to demonstrate hierarchical inheritance
#include <iostream>
using namespace std;
class B
{
protected:
    int x, y;

public:
    void assign()
    {
        x = 10, y = 20;
    }
};
class D1 : public B
{
    int s;

public:
    void add()
    {
        s = x + y;
        cout << "Thw=e sum is:\nx+y=" << s << endl;
    }
};
class D2 : public B
{
    int a;

public:
    void sub()
    {
        a = x - y;
        cout << "The subtraction is:\nx-y=" << a << endl;
    }
};
class D3 : public B
{
    int c;

public:
    void mul()
    {
        c = x * y;
        cout << "The multiplication is:\nx*y=" << c << endl;
    }
};
int main()
{
    D1 d1;
    D2 d2;
    D3 d3;
    d1.assign();
    d1.add();
    d2.assign();
    d2.sub();
    d3.assign();
    d3.mul();
    return 0;
}