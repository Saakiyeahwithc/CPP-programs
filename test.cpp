#include <iostream>
using namespace std;
class index
{
    int count;

public:
    index()
    {
        count = 0;
    }
    void getdata(int i)
    {
        count = i;
    }
    void showdata()
    {
        cout << "count =" << count << endl;
    }
    void operator++(); // for prefix
};
void index ::operator++()
{
    ++count;
}
int main()
{
    index a;
    a.getdata(3);
    a.showdata();
    ++a;
    a.showdata();
    return 0;
}