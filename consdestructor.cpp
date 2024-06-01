// CPP program to demonstrate constructor and destructor
#include <iostream>
using namespace std;
class A
{
    static int count;

public:
    A()
    {
        count++;
        cout << count << "\tObject created!" << endl;
    }
    ~A()
    {
        cout << count << "\tObject destroyed!" << endl;
        count--;
    }
};
int A::count;
int main()
{
    A a1, a2, a3;
    return 0;
}
