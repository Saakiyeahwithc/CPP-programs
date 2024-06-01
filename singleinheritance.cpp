// CPP program to show single inhertance
#include <iostream>
using namespace std;
class B
{
private:
    int x;

protected:
    int y;

public:
    int z;
    void getdata()
    {
        cout << "Enter three numbers:\t" << endl;
        cin >> x >> y >> z;
    }
    void showdata()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
};
class D : public B
{
    int k;

public:
    void getk()
    {
        cout << "Enter k:\n";
        cin >> k;
    }
    void output()
    {
        int s = y + z + k;
        cout << "The sum is:\ny+z+k=" << s << endl;
    }
};
int main()
{
    D d1;
    d1.getdata();
    d1.getk();
    d1.showdata();
    d1.output();
    return 0;
}