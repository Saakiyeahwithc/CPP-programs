// CPP program to demonstrate hybrid inheritance
#include <iostream>
using namespace std;
class B1
{
protected:
    int x;

public:
    void assignx()
    {
        x = 10;
    }
};
class D1 : public B1
{
protected:
    int y;

public:
    void assigny()
    {
        y = 20;
    }
};
class D2 : public D1
{
protected:
    int z;

public:
    void assignz()
    {
        z = 30;
    }
};
class B2
{
protected:
    int k;

public:
    void assignk()
    {
        k = 40;
    }
};
class D3 : public B2, public D2
{
    int total;

public:
    void output()
    {
        total = x + y + k + z;
        cout << "The total is:" << total << endl;
    }
};
int main()
{
    D3 d;
    d.assignx();
    d.assigny();
    d.assignz();
    d.assignk();
    d.output();
    return 0;
}