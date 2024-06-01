// CPP program to demonstrate operator overloading for prefix increament
#include <iostream>
using namespace std;
class index
{
private:
    int count;

public:
    index()
    {
        count = 0;
    }
    int getdata(int a)
    {
        count = a;
        return a;
    }
    void showdata()
    {
        cout << "count=" << count << endl;
    }
    void operator++() // Declaration of operator overloading
    {
        ++count;
    }
};
int main()
{
    index a; // Calling function
    int b;
    cout << "Enter a number:" << endl;
    cin >> b;
    a.getdata(b);
    a.showdata();
    ++a;
    a.showdata();
    return 0;
}